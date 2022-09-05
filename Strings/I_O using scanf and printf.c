// P10.3 Input and Output strings using scanf() and printf().
#include<stdio.h>
int main()
{
	char name[40];
	printf("Enter a name : ");
	scanf("%s",name);
	printf("%s  %s\n",name,"Srivastava");
	return 0;
}
