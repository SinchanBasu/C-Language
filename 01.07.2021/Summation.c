//Question 2.
#include<stdio.h>
int main()
{
	int arr[10], i, sum=0;
	for(i=0; i<10; i++)
	{
		printf("Enter a value for element arr[%d]: ",i);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("The summation of array elements is : %d",sum);
	return 0;
} 
