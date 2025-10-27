#include<iostream>
using namespace std;

//copy constructor demo 

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
	complex(complex &obj)
	{
		cout<<"---------complex(complex &obj)---------\n";
		this->real = obj.real;
		this->imag = obj.imag;
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

	complex cc(c1); // complex cc=c1;
	cout<<"cc =>\n";
	cc.print_complex_number();
	return 0;
}
