#include<iostream>
using namespace std;

// static demo

class complex
{
	int real;
	int imag;

	static int count;
	public :
	complex(int r=1,int i=1)
	{
		cout<<"-----complex()------\n";
		this->real=r;
		this->imag=i;
		count++;

	}
	static void print_count()
	{
		cout<<"value of count = "<<count<<" address of count = "<<&count<<"\n";

	}

	void print_complex_number()
	{
		cout<<"complex number = "<<this->real<<"+j"<<this->imag<<"\n";
	}
};     // end of class

// global defination of static data member
int complex::count = 0;

int main()
{
	complex::print_count();

	complex c1(1,2);
	cout<<"size of c1 = "<<sizeof(c1)<<"\n";
	c1.print_count();

	complex c2(2,4);
	c2.print_count();

	complex::print_count();
	return 0;
}
