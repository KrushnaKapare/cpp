#include<stdio.h>

struct time
{
	int hr;
	int min;
	int sec;

	void printTime()
	{
		printf("Time= %d : %d : %d\n",hr,min,sec);
	}

	void acceptTime()
	{
		printf("Enter Time\n");
		scanf("%d%d%d",&hr,&min,&sec);
	}

	void incrTimeByOneSec()
	{
		sec++;
		if(sec>=60)
		{
			sec = 0;
			min++;
		}
		if(min >= 60)
		{
			min = 0;
			hr++;
		}
		if(hr >= 24)
			hr = 0;
	}
};

int main()
{
	struct time t1;
	t1.hr = 4;
	t1.min = 45;
	t1.sec = 30;

	t1.printTime();
	t1.acceptTime();
	t1.printTime();
	t1.incrTimeByOneSec();
	t1.printTime();
	return 0;
}
