#include<iostream>
using namespace std;

// friend funcion 

class mydata
{
	private:
		int pin;
		int pass;

	public:
		mydata()
		{
			pin=5555;
			pass=1234;
		}

		void print_data()
		{
			cout<<"pin = "<<pin<<"  pass = "<<pass<<"\n";
		}

		friend void anyfunction();
};

void anyfunction()
{
	mydata d1;
	d1.pass=1234;
	d1.pin=9999;
	d1.print_data();
}

int main()
{
	anyfunction();
	cout<<"\n";
	return 0;
}
