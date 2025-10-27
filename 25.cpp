#include<iostream>
using namespace std;
class complex
{
	int real;
	int imag;

	static int count;
	public:
	complex(int r=1, int i=1)
	{
		cout<<"------complex()------\n";
		this->real=r;
		this->imag=i;
		count++;
	}
	void print_count()
	{
		cout<<"value of count = "<<this->count<<" address of count = "<<&count<<"\n";

	}
	void print_complex_number()
	{
		cout<<"complex Number="<<this->real<<"+j"<<this->imag<<"\n";
	}
};

int complex::count = 0;

int main()
{
	complex c1(1,2);
	cout<<"size of c1 = "<<sizeof(c1)<<"\n";
	c1.print_count();

	complex c2;
	c2.print_count();
	return 0;
}
