#include<iostream>
using namespace std;

// base class
// parent class

class person
{
	protected:
		string name;
		int age;
	public:
	person()
		{
			string name;
			int age;
		}

	void print_person()
	{
		cout<<" name = "<<name <<" age = "<<age<<"\n";
	}

	bool can_vote()
	{
		if(age>= 18)
			return true;
		else
			return false;
	}
};

// derived class
// child class

class emp : public person
{
	int sal;
	int empid;

	public:
	emp()
	{
		sal= 25000;
		empid = 304;
	}

	void print_emp()
	{
		this->print_person();
		cout<<" sal = "<<sal<<" empid = "<<empid<<"\n";
	}

	void update_name(string new_name)
	{
		name = new_name;
	}
};

int main()
{

	emp e1;
	person *pptr =NULL;
	pptr = &e1;

	return 0;
}
