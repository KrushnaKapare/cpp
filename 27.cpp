#include<iostream>
using namespace std;

// singleton class

class singleton
{
	
	static singleton *ptr;
//	private:
	singleton()
	{
		cout<<"-------singleton()------\n";
	}

	public:
	static singleton* get_object()
	{
		if (ptr == NULL)
			ptr = new singleton();
		return ptr;
	}

	void print_message()
	{
		cout<<"singleton design pattern demo \n";
	}
};

singleton* singleton::ptr = NULL;

int main()
{
	singleton *ptr1 = singleton::get_object();
	cout<<"address of ptr1"<<ptr1<<"\n";
	ptr1->print_message();

	singleton *ptr2 = singleton::get_object();
	cout<<" address of ptr2"<<ptr2<<"\n";

	singleton *ptr3 = singleton::get_object();
	cout<<" address of ptr3"<<ptr3<<"\n";

	singleton *ptr4 = singleton::get_object();
	cout<<" address of ptr4"<<ptr4<<"\n";

	return 0;
}

