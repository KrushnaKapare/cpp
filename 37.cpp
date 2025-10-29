#include<iostream>
using namespace std;

// program to test the mode of inheritance

class DESD
{
	private:
		int private_data;
	protected:
		int protected_data;
	public:
		int public_data;
};

class derived: public DESD
{
	public:
		void print_data()
		{
			this->private_data=1;
			this->protected_data=2;
			this->public_data=3;
		}
};

class derived_derived : public derived
{
	public :
		void derived_derived_print()
		{
			this->private_data=4;
			this->protected_data= 6;
			this->public_data=9;
		}
};

class other
{
	public:
		void other_print()
		{
			derived g;
			g.private_data =8;
			g.protect_data = 5;
			g.public_data = 1;
		}
};

int main()
{
	return 0;
}
