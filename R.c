#include<stdio.h>
int main()
{
	int i,n,even_sum=0,odd_sum=0;
	printf("\nEnter any positive number : ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2 == 0)
		{
			even_sum=even_sum + i;
		}
		else
		{
			odd_sum=odd_sum + i;
		}
	}
	printf("\nThe sum of even numbers upto %d is : %d",n,even_sum);
	printf("\nThe sum of odd numbers upto %d is : %d",n,odd_sum);
	return 0; 
}
