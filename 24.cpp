#include<iostream>
using namespace std;

void staticDemo()
{
	int simple=1;
	static int staticData;
	staticData++;
	cout<<"staticdata = "<<staticData<<"\n";
}

int main()
{
	staticDemo();
	staticDemo();
	staticDemo();

	return 0;
}
