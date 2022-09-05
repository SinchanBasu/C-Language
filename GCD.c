//Question 4.
#include<stdio.h>
int main()
{
	int x,y,a,b;
	printf("Enter any two numbers : ");
	scanf("%d%d",&x,&y);
	a=x; b=y;
	while(a!=b)
	{
		if(a>b)
		        a=a-b;
		else
		        b=b-a;
	}
	printf("GCD of %d and %d is %d\n",x,y,a);
	return 0; 
}
