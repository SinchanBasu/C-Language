//Question 1.
#include<stdio.h>
int main()
{
	int a,b;
	AREA();
	printf("Enter the length and breadth of rectangle : ");
	scanf("%d%d",&a,&b);
	printf("The area of rectangle is : %d\n",AREA(a,b));
	
}
int AREA(int x,int y)
{
	int c;
	c = x * y;
	return c;
} 
