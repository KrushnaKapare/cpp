#include<stdio.h>


// scope resolution operator ::

int x = 100;
namespace ns1
{
	int connector = 2009;

	namespace nns
	{
		int var = 300;
	}
}

namespace ns2
{
	int connector = 3307;

	int num1 = 33;
	int num2 = 44;
	int num3 = 55;

}

int main()
{
	printf("x = %d\n", x);
	printf("::x = %d\n", ::x);
	printf("::connector = %d\n",ns1::connector);
	printf("ns1::nns::var= %d\n",ns1::nns::var);
	printf("num2 = %d\n", ns2::num2);
   
	using namespace ns2;
	printf("num3 =%d\n", num3);

	return 0;
}
