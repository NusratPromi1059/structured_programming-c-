#include<stdio.h>
int main()
{
	double basic_salary,allowance,rent,gross_salary;
	
	printf("Enter Niloys basic salary: ");
	scanf("%lf",&basic_salary);
	allowance=0.4*basic_salary;
	rent=0.2*basic_salary;
	gross_salary=basic_salary-allowance-rent;
	printf("Gross salary of Niloy:%.2lf",	gross_salary);
	
	return 0;
	
}