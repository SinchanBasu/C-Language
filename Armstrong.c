//Question 3.
#include<stdio.h>
int main()
{
	int n,num,d,sum=0,cube;
	printf("Enter a number : ");
	scanf("%d",&num);
	n=num;
	while(n>0)
	{
		d=n%10;
		n=n/10;
		cube=d*d*d;
		sum=sum+cube;
	}
	if(sum==num)
	  printf("The number %d is an armstrong number",sum);
	else
	  printf("The number %d is not an armstrong number",sum);
	return 0; 
}
