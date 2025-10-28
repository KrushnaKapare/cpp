#include<iostream>
using namespace std;

// exception handling 

int main()
{
	int n,d;
	try
	{
		cout<<"enter n and d\n";
		cin>>n>>d;
		if(d == 0)
			throw "error";
		int r=n/d;
		cout<<"result="<<r<<"\n";
	}
	catch(int e)
	{
		cout<<"divide by zero error ----(int)\n";
	}
	catch(char e)
	{
		cout<<"divide by zero error ----(char)\n";
	}
	catch(...)
	{
		cout<<"divide by zero error ---(...)\n";
	}

	return 0;
}
