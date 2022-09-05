//Question 3.
#include<stdio.h>
#include<math.h>
int prime(int num1,int num2)
{
	int i,j,sum=0;
	for(i=num1; i<=num2; i++)
	{
		for(j=num1; j<num2; j++)
		{
			if(i%j==0)
			break;
		}
		if(i==1 || i==j)
		{
			sum=sum+i;
		}
	}
	return sum;
} 
int main()
{
	int num1=2,num2=50;
	int num3 = prime(num1,num2);
	printf("The sum of prime numbers between 2 to 50 is : %d",num3);
	return 0; 
} 
