#include<stdio.h>

class time
{
	private:
		int hr;
		int min;
		int sec;
	
	public:
		time( int h, int m, int s)   // Constructor
		{
			printf("\n -------time(int,int,int)--------\n");
			this->hr=h;
			this->min=m;
			this->sec=s;
		}

		// setter function
        // t_p.setMin(15);
		void setMin(int min)   //setter
		{
			//data member = parameter
			 this->min    = min;
		}

		void setHr(int hr)   //setter
   		{
			this->hr = hr;
		}
		void setSec(int sec)  //setter
		{
			this->sec = sec;
		}
        
		// int my_Sec = t1.getSec();
		int getSec()        //getter
		{
			return this->sec;
		}
        void printTime()       //Facilitator
        {
			printf("Time = %d : %d : %d\n",this->hr,this->min,this->sec);
        }
        void acceptTime()     //Facilitator
        {
            printf("\n Enter time");
			scanf("%d%d%d",&this->hr,&this->min,&this->sec);
        }

		~time()   //destructor
		{
			printf("--------Destructor()-------\n");
		}

};

int main()
{

	time t1(11,25,50);
	t1.printTime();

	t1.setMin(15);
	t1.printTime();

	t1.setHr(12);
	t1.printTime();

	t1.setSec(59);
	t1.printTime();
    
	int my_Sec = t1.getSec();
	printf("My sec value = %d\n", my_Sec);
	return 0;
}
