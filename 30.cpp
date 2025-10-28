#include<iostream>
using namespace std;

// operator overloading


class complex
{
	int real;
	int imag;

	public:
	       complex(int r=1,int i=1)
		   {
			   this->real=r;
			   this->imag=i;
		   }

		   void print_complex_number()
		   {
			   cout<<"complex number="<<this->real<<"+j"<<this->imag<<"\n";
		   }
			
		   complex operator+(complex &c2)
		   {
			   complex c3;
			   c3.real=this->real+c2.real;
			   c3.imag=this->imag+c2.imag;
			   return c3;
		   }

		   complex sum(complex& c2)
		   {
			   complex c3;
			   c3.real=this->real+c2.real;
			   c3.imag=this->imag+c2.imag;
			   return c3;
		   }

		   friend complex operator-(complex &c1, complex &c2);

};

complex operator-(complex &c1,complex &c2)
{
	complex c4;
	c4.real = c1.real - c2.real;
	c4.imag = c1.imag - c2.imag;
	return c4;
}

int main()
{
	complex c1(7,6);
	c1.print_complex_number();

	complex c2(3,2);
	c2.print_complex_number();
	
	complex c3;
	c3 = c1 + c2;
	c3.print_complex_number();

	complex c4;
	c4 = c1 - c2;
	c4.print_complex_number();
	return 0;
}
