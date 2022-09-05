#include<stdio.h>
int main()
{
	float l1,l2,l3,total,sancloan,maxloan;
	printf("Enter three loan amounts(user given)\n");
	scanf("%f%f%f",&l1,&l2,&l3);
	printf("Enter maximum loan(given by money lender)");
	scanf("%f",&maxloan);
	total=l2+l3;
	if(l1==0)
	{
		if(total>maxloan)
		{
			sancloan=maxloan-l2;
			printf("Loan can be sanctioned : %f\n",sancloan);
		}
		else
		   sancloan=l3;
           printf("\nAmount can be sanctioned : %f\n",sancloan);
        
	}
	else
	{
		printf("Loan cannot be sanctioned");
	}
	return 0;
}
