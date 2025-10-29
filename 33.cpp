#include<iostream>
using namespace std;

// releasing pointer

class singleton
{

	private:
	static singleton *ptr;
	singleton()
	{
		cout<<"------- singleton()---------\n";
	}
	public:
	static singleton* get_object()
	{
		if(ptr == NULL)
			ptr=new singleton();
		return ptr;
	}

	static void release_object()
	{
		if (ptr != NULL)
			delete ptr;
		ptr = NULL;
	}
	void print_message()
	{
		cout<<" singleton design pattern demo\n";
	}

	~singleton()
	{
		cout<<"------- ~singleton() --------\n";
	}
};

//global defination of static data member
singleton* singleton::ptr = NULL;

int main()
{
	singleton *ptr1 =singleton::get_object();
	cout<<"address of ptr1 = "<<ptr1<<"\n";
	ptr1->print_message();

	singleton *ptr2 = singleton::get_object();
	cout<<"address of ptr2 = "<<ptr2<<"\n";

	singleton::release_object();

	singleton *ptr3 = singleton::get_object();
	cout<<"address of ptr3 = "<<ptr3<<"\n";

	singleton *ptr4 = singleton::get_object();
	cout<<"address of ptr4 = "<<ptr4<<"\n";

	singleton::release_object();
	return 0;
}


