#include<stdio.h>

struct time
{
   	private: 
		int hr;
		int min;
		int sec;

	public: 
		void printTime()
		{
			printf("Time = %d : %d : %d\n",hr,min,sec);
		}
		void acceptTime()
		{
			printf("Enter Time\n");
			scanf("%d%d%d",&hr,&min,&sec);
		}
};

int main()
{
	time t1;
	t1.acceptTime();
	t1.printTime();
}
