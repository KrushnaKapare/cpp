#include<iostream>
using namespace std;

// overload [] operator

class array
{
	int *ptr;
	int size;

	public:
	array(int s)
	{
		this->size=s;
		this->ptr=new int[size];
		for(int i =0; i<this->size;i++)
		{
			this->ptr[i] = i+2;
		}
	}

	array(const array& a1)
	{
		this->size=a1.size;
		this->ptr=new int[this->size];
		for(int i=0; i<this->size;i++)
		{
			this->ptr[i]=a1.ptr[i];
		}
	}

	void print_array()
	{
		for(int i=0; i<5 ; i++)
		{
			cout<<"ptr["<<i<<"]="<<this->ptr[i]<<"\n";
		}
	}

	~array()
	{
		cout<<"---- ~array()---\n";
		if(this->ptr != NULL)
			delete[]this->ptr;
		this->ptr=NULL;
	}

	int& operator[](int index)
	{
		if(index >= this->size)
		{
			cout<<"invalid index\n";
			exit(0);
		}
		return this->ptr[index];
	}
};

int main()
{

	int arr1[5] = {22,44,55,66,88};
	arr1[3] =100;
	for (int i= 0; i<5; i++)
	{
		cout<<"arr1["<<i<<"]="<<arr1[i]<<"\n";

	}
	
	array a1(5);
	a1.print_array();
	// update value at 3rd index 5 => 100
	a1[3] = 100;
	a1.print_array();

	return 0;
}
