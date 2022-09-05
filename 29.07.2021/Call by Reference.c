//Question 2.
#include<stdio.h>
int change(int*,int*);
int main()
{
	int a,b;
	printf("Enter two values : \n");
	scanf("%d%d",&a,&b);
	change(&a,&b);
	printf("After changing two value of a=%d and b=%d",a,b);
}
int change(int *a,int *b)
{
	int k;
	k=*a;
	*a=*b;
	*b=k;
	printf("Value in this function a=%d and b=%d\n",*a,*b);
} 
