#include<iostream>
using namespace std;

// class complex = using cin and cout 

class complex
{
	int real; 
	int imag;

	public:
	complex(int r=1, int i=1)   // parameterized constructor
	{
		cout<<"-------complex(int, int)------\n";
		this->real = r;
		this->imag = i;

	}
	void print_complex_number()
	{  
    	cout<<"complex Number= "<<this->real<<"+j"<<this->imag<<"\n";
	}

	void accept_complex_number()
	{
		cout<<"Enter complex number\n";
		cin>>this->real>>this->imag;
	}
    
	~complex()
	{
		cout<<"-------complex()----------\n";
	}

};

int main()
{
	complex c1;
	c1.print_complex_number();
	c1.accept_complex_number();
	c1.print_complex_number();
	
	complex c2(5,7);
	c2.print_complex_number();
	return 0;
}
