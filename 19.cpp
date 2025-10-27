#include<iostream>
using namespace std;

void swap(int &x, int &y)
{
	int t = x;
	x = y;
	y = t;
}

int main()
{
	int a = 100, b=999;
	cout<<"before swap a = "<<a<<"  b = "<<b<<"\n";
	swap(a,b);
	cout<<"after swap a = "<<a<<"  b = "<<b<<"\n";

	return 0;
}
