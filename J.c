#include<stdio.h>
int main()
{
	int x,y,quotient,remainder;
	printf("Enter two numbers : ");
	scanf("%d%d",&x,&y);
	quotient = x/y;
	remainder = x%y;
	printf("Quotient = %d,Remainder = %d",quotient,remainder);
	return 0;
}
