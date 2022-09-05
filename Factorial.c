//Question 3.
#include<stdio.h>
int main()
{
	int n,num,fact=1;
	printf("Enter any number : ");
	scanf("%d",&n);
	num=n;
	if(n<0)
	         printf("No factorial as the user given number is negative\n");
	else
	{
		     while(n>1)
		     {
		     	   fact*=n;
		     	   n--;
			 }
			 printf("Factorial of %d=%d\n",num,fact);
	}
	return 0; 
}
