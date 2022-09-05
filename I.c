#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	if(num<0)
	    printf("The number entered is negative\n");
	else
	    printf("The number entered is positive\n");
	return 0;
}
