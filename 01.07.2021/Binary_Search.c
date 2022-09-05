//Question 5.
#include<stdio.h>
int main()
{
	int arr[20],start,end, mid, n, i, item;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("Enter the array elements : ");
	for(i=0;i<n;i++)
	     scanf("%d",&arr[i]);
	printf("Enter the element to be searched : ");
	scanf("%d", &item);
	start = 0;
	end = n-1;
	mid = (start + end)/2;
	while (item != arr[mid] && start <= end)
	{
	   	if(item > arr[mid])
	   	    start = mid + 1;
	   	else
	   	    end = mid - 1;
	   	mid = (start + end)/2;
	}
	if(item==arr[mid])
	     printf("%d found at position %d",item,mid+1);
	if(start>end)
	     printf("%d not found in array",item);
	return 0;
} 
