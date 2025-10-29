#include<iostream>
using namespace std;


// association
// car has-a engine

class engine
{

	int cc, fuel;
	
	public:
    	void accept_engine()
		{
			cout<<" enter engine data as cc and fuel= \n";
			cin>>cc>>fuel;
		}

		void print_engine()
		{
			cout<<" engine info cc = "<<cc<<" fuel = "<<fuel<<"\n";
		}

};

class car
{
	int price;
	engine e1;
	
	public:
	void accept_car()
	{
		cout<<"enter car price \n";
		cin>>price;
		e1.accept_engine();
	}
	void print_car()
	{
		cout<<"car price = "<<price<<"\n";
		e1.print_engine();
	}
};

int main()
{
	engine e1;
	e1.accept_engine();
	e1.print_engine();

	car c1;
	c1.accept_car();
	c1.print_car();
	return 0;
}
