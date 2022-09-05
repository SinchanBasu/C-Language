//Question 5.
#include<stdio.h>
int cube(int n)
{
	int i,a=1;
	for(i=1;i<=3;i++)
	{
		a=a*n;
	}
	return a;
}
int main()
{
	int x,y,z;
	printf("Enter the value of x : ");
	scanf("%d",&x);
	printf("Enter the value of y : ");
	scanf("%d",&y);
	printf("Enter the value of z : ");
	scanf("%d",&z);
	printf("The sum of x^3 + y^3 + z^3 : %d",(cube(x) + cube(y) + cube(z)));
	return 0;
} 
