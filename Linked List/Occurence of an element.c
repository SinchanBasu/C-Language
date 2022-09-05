// 1. Write a function to count the number of occurences of an element in a single linked list.
#include<stdio.h>
int occur(int list[],int n,int value);
int main()
{
	int list[20],i,n,value,count;
	printf("Enter the size of list : ");
	scanf("%d",&n);
	printf("Enter any elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&list[i]);
	}
	printf("Enter the value to find its occurence : ");
	scanf("%d",&value);
	count = occur(list,n,value);
	printf("%d occurs for %d times",value,count);
	return 0;
}
int occur(int list[],int n,int value)
{
	int i,count = 0;
	for(i=0;i<n;i++)
	{
		if(list[i]==value)
		{
			count+=1;
		}
	}
	return count;
}
