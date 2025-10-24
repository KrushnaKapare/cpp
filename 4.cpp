#include<stdio.h>

// default arguments

void add(int a= 2, int b=3, int c=4, int d=9)
{
	int res;
	res =a+b+c+d;
	printf("a=%d b=%d c=%d d=%d ==> %d\n", a,b,c,d,res);
}

int main()
{
	add(1,2,3,4);
	add(1,2,3);
	add(1,2);
	add(1);
	add();
	return 0;
}
