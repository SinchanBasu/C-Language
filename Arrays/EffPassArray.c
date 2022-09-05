// P8.8 Program to understand the effect of passing an array to a function.
#include<stdio.h>
int func(int val[]);
int main()
{
	int i,arr[6]={1,2,3,4,5,6};
	func(arr);
	printf("Contents of an array are : ");
	for(i=0; i<6; i++)
	         printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
int func(int val[])
{
	int sum=0,i;
	for(i=0; i<6; i++)
	{
		val[i]=val[i]*val[i];
		sum += val[i];
	}
	printf("Sum of squares = %d\n",sum);
}
