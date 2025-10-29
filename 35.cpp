#include<iostream>
using namespace std;

// inheritance [is-a]
// parent class = 

class base
{
	public:
		int b;
		void fun_base()
		{
			cout<<" ----- funbase() -----\n";
		}
};

//child = derived class
class derived :public base
{
	public:
		int d;
		void fun_derived()
		{
			cout<<" ----- fun_derived() -----\n";
		}
};

int main()
{
	derived d1;
	d1.fun_derived();
	d1.fun_base();
	cout<<" size of d1 = "<<sizeof(d1)<<"\n";

	return 0;
}
