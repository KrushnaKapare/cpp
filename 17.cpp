#include<iostream>
using namespace std;

class const_demo
{
	int n; 
	const int c;
    mutable int m;	
	public:
    const_demo():c(30) // constructor member initializer list 
	{
		n = 44;
		m = 111;
	}

	void print_data()const 
	{
       //n++;
		m++;
		cout<<"n= "<<n<<"\n";
		cout<<"c= "<<c<<"\n";
		cout<<"m= "<<m<<"\n";
	}
	
};

int main()
{
	const_demo  d1;
	d1.print_data();
	return 0;
}
