//Question 1.
#include<stdio.h>
int change(int,int);
int main()
{
	int x,y;
	printf("Enter two values : \n");
	scanf("%d%d",&x,&y);
	change(x,y);
	printf("Value of x=%d and y=%d\n",x,y);
}
int change(int a,int b)
{
	int k;
	k=a;
	a=b;
	b=k;
} 
