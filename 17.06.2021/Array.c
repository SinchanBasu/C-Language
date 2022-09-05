//Question 2.
#include<stdio.h>
int main()
{
	int arr[20],i,n,sum=0;
	printf("Enter the number of values to add : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
	    printf("Enter a value for array[%d] : ",i);
	    scanf("%d",&arr[i]);
	}
	for(i=1; i<=n; i++)
	{
		if(i%3==0)
		  sum+=arr[i];
	}
	printf("The required sum is : %d\n",sum);
	return 0; 
}
