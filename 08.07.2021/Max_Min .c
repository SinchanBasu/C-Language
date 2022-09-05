//Question 1.
#include<stdio.h>
int main()
{
	int arr[20],i,max,min,n;
	printf("Enter the number of elements stored in the array : ");
	scanf("%d",&n);
	printf("Enter the elements of the array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("\nThe maximum element is : %d",max);
	printf("\nThe minimum element is : %d",min);
	return 0;
} 
