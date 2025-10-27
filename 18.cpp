#include<iostream>
using namespace std;

//reference

int main()
{
	int n1;
	n1=15;

	int &ref = n1;
	ref = 50;

	cout<<"value of n1 ="<<n1<<" address of n1 = "<<&n1<<"\n";
	cout<<"value of ref ="<<ref<<" address of ref = "<<&ref<<"\n";

	return 0;

}
