#include<stdio.h>

class time
{
	private:
		int hr;
		int min;
		int sec;
	public:
		void printTime()
		{
			printf("Time= %d : %d : %d\n",hr,min,sec);
		}
		void acceptTime()
		{
			printf("Enter Time\n");
			scanf("%d%d%d",&hr,&min,&sec);
		}
};

int main()
{
	time  t1; /* time is class 
			     then t1 is object
			  */
	printf("size of t1 object =%d\n", sizeof(t1));
	// size of all members of class is 12 bytes 
	// 4+4+4 = 12 
	t1.acceptTime();
	t1.printTime();

	time t2;
	t2.acceptTime();
	t2.printTime();

	time t3;
	t3.acceptTime();
	t3.printTime();

	return 0;
}
