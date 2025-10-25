#include<stdio.h>

class time
{
	private:
		int hr;
		int min;
		int sec;
	public:
		
		time()   // Constructor function 
		{
			printf("---------------------------\n");
			this->hr=0;
			this->min=0;
			this->sec=0;
		}
		time(int h, int m, int s) //constructor
		{
			printf("****************************\n");
			this->hr=h;
			this->min=m;
			this->sec=s;
		}
		time(int s)
		{
			this->sec=s;
		}

		void printTime()
		{
			printf("Time = %d : %d : %d\n",hr,min,sec);
		}

		void acceptTime()
		{
			printf("Enter Time\n");
			scanf("%d%d%d",&hr,&min,&sec);
		}

		~time()   // Destructor function
		{
			printf("----------Destructor-----------\n");
		}
};

int main()
{
	time t1;
	t1.printTime();

	time t2;
	t2.printTime();

	time t_p(7,30,50);
	t_p.printTime();

	time t3(12,45,59);
	t3.printTime();
	time t_s(9,45,12);
	t_s.printTime();

	time t_k(55);
	t_k.printTime();

	return 0;
}
