#include<stdio.h>

// function overloading

void printValue(int a)
{
	printf("value of int a=%d\n",a);
}

void printValue(int a, int b)
{
	printf("value of int a=%d , int b=%d\n",a,b);
}

void printValue(char a)
{
	printf("value of char a=%c\n",a);
}

void printValue(int a, char c)
{
	printf("value of int a=%d char c=%c\n",a,c);
}

void printValue(char c, int a)
{
	printf("value of char c=%c int a=%d\n", c, a);
}
void printValue(float a, char c)
{
	printf("value of float a=%f char c=%c\n",a,c);
}
int main()
{
	printValue(10);
	printValue(11, 22);
	printValue('A');
	printValue(3.14f,'P');
	printValue(777,'Z');
	printValue('K', 888);
	printValue(45,45);
    printValue(7,'S');
	
	return 0;

}
