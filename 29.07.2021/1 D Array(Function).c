//Question 4.
#include<stdio.h>
int total(int*,int);
int main()
{
	int a[10],sum,n,i;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("Enter the elements of the array : ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	sum=total(a,n);
	printf("Summation = %d",sum);
}
int total(int *a,int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	sum=sum+a[i];
	return sum;
} 
