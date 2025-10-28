#include<iostream>
using namespace std;

//deep copy, shallow copy

class array 
{
	int size ;
	int *ptr;

	public:
	array(int s)
	{
		this->size = s; 
		this->ptr = new int[this->size];
		for(int i=0; i< this->size; i++)
		{
			this->ptr[i] = 1;
		}
	}
  array(array &a1)
  {
    this->size = a1.size;
	this->ptr = new int [this->size];
	for(int i=0; i<this->size;i++)
	{
		this->ptr[i] = a1.ptr[i];
	}
  }
  void print_array()
  {
	  cout<<"size of array = "<<this->size<<"\n";
	  cout<<"array = "<<"\n";
	  for (int i=0; i<this->size; i++)
	  {
        cout<<"ptr ["<<i<<"] = "<<this->ptr[i]<<"\n";
	  }
  }

  ~array()
  {
	  cout<<"------ ~complex()--------\n";
	  if(this->ptr != NULL)
		  delete [] this->ptr;
	  this->ptr = NULL;
	}

 };


int main()
{
	array a1(5);
	a1.print_array();

	array ac(a1);   //array ac=a1;
	ac.print_array();

	return 0;
}
