#include<iostream>
using namespace std;

class address 
{

	int dd,mm,yyyy;
	public:
	void accept_date()
	{
		cout<<" enter date dd-mm-yyyy\n";
		cin>>dd>>mm>>yyyy;
	}

	void print_date()
	{
		cout<<" date is "<<dd<<"-"<<mm<<"-"<<yyyy<<"\n";
	}
};

class person
{
	string name;
	int age;
	Tdate d1;
	public:

	void accept_person_data()
	{
		cout<<" enter name age and date of birth\n";
		cin>>name>>age;
		d1.accept_date();
	}

	void print_person_data()
	{
		cout<<" person data\n Name = "<<name<<"\n age = "<<age<<"\n";
		d1.print_date();
	}

};

int main()
{
	person p1;
	p1.accept_person_data();
	p1.print_person_data();
	return 0;
}
