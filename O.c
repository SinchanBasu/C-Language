#include<stdio.h>
int main()
{
	float gross_salary,net_salary,tax;
	printf("Enter the gross salary : ");
	scanf("%f",&gross_salary);
	if(gross_salary<=20000)
	{
		tax=(gross_salary*0)/100;
	}
	if(gross_salary >=20000 && gross_salary<40000)
	{
		tax=(gross_salary*3)/100;
	}
	if(gross_salary >=40000 && gross_salary<50000)
	{
		tax=(gross_salary*5)/100;
	}
	if(gross_salary >=50000)
	{
		tax=(gross_salary*8)/100;
	}
	net_salary=gross_salary - tax;
	printf("The net salary is : %0.2f\n",net_salary);
	printf("The tax is : %0.2f\n",tax);
	return 0;
	        
}
