//Question 2.
#include<stdio.h>
int main()
{
	char str[100];
	int i,length=0;
	printf("Enter the string : \n");
	gets(str);
	for(i=0;str[i] !='\0';i++)
	    length++;
	printf("Length of the string is : %d\n",length);
	return 0;
} 
