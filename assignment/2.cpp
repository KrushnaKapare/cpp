#include<stdio.h>

class employee
{
	private:
		int empID;
		char empName[50];
		float empSalary;

	public:
		void PrintData()
		{
			printf("Employee ID = %d\tEmployee Name = %s\tEmployee Salary = %f\n", this->empID,this->empName,this->empSalary);
		}
		void AcceptData()
		{
			printf("Enter Employee ID, Name, Salary\n");
			scanf("%d %c %2f",&this->empID, this->empName,&this->empSalary);

		}

};

int main()
{
	employee e1;

	e1.AcceptData();
	e1.PrintData();

	return 0;
}
