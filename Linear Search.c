//Question 1.
#include<stdio.h>
int main()
{ 
	int i,item,arr[20],n,f=0;
	printf("Enter number of values : ");
	scanf("%d",&n);
	printf("Enter the array elements : ");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter the item to be searched : ");
	scanf("%d",&item);
	for(i=0;i<n;i++)
	{
		if(item==arr[i])
		{
			f=1;
			printf("\nItem is present in the location %d",item,i+1);
			break;
		}
	}
	if(f==0)
	   printf("\nItem %d is not present in the array",item);
	return 0; 
}
