#include<iostream>
using namespace std;

// sum() function in complex class

class complex
{
	int real;
	int imag;

	public:
	complex(int r=1, int i=1)
	{
		this->real=r;
		this->imag=i;
	}
	complex sum(complex &c2)
	{
		complex c3;
		c3.real = this->real + c2.real;
		c3.imag = this->imag + c2.imag;
		return c3;
	}

	void print_complex_number()
	{
		cout<<"complex number = "<<this->real<<"+j"<<this->imag<<"\n";
	}

};

int main()
{
	complex c1(5,7);
	cout<<" c1 => \n";
	c1.print_complex_number();

	complex c2(3,2),c3;
	cout<<" c2 => \n";
	c2.print_complex_number();

	c3 = c1.sum(c2);
	cout<<"c3 =>\n";
	c3.print_complex_number();
	return 0;
}
