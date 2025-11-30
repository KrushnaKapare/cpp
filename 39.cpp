#include<iostream>
using namespace std;

// Diamond problem

class A   // 1 first class
{
	public: 
		void funA()
		{
			cout<<"--- A::funA() ---\n";

		}
};

class B: virtual public A  // 2 second class
{
	public:
		void funB()
		{
			cout<<"--- B::funB() ---\n";

		}
};

class C: virtual public A  // 3 third class
{

	public: 
		void funC()
		{
			cout<<"--- C::funC() ---\n";
		}
};

class D: public B, public C //
{
	public: 
		void funD()
		{
			cout<<"--- D::funD() ---\n";
		}
};

int main()
{
	B b1;
	b1.funB();
	b1.funA();

	C c1;
	c1.funC();
	c1.funA();

	cout<<"\n";

	return 0;
}
