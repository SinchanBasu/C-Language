#include <stdio.h>
void main()
{
	int a,b,c,d,e;
	float f;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=(float)a/b;
	printf("\n The result of addition is: %d",c);
	printf("\n The result of substraction is: %d",d);
	printf("\n The result of multiplication is: %d",e);
	printf("\n The result of division is: %f",f);
}
