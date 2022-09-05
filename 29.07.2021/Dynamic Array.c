//Question 3.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,sum,n,i;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	printf("Enter the elements of array : ");
	for(i=0;i<n;i++)
	scanf("%d",&p[i]);
	sum=0;
	for(i=0;i<n;i++)
	sum=sum+p[i];
	printf("Array elements are : ");
	for(i=0;i<n;i++)
	printf("%d ",p[i]);
	printf("\nSummarisation = %d",sum);
} 
