//Question 4.
#include<stdio.h>
int main()
{
	char str1[100],str2[100];
	int i;
	printf("Enter the string : ");
	      gets(str2);
	i=0;
	    while(str2[i] !='\0')
	    {
	    	str1[i]=str2[i];
	    	i++;
		}
	str1[i]='\0';
	printf("\nThe copied string is : %s",str2);
	return 0;
} 
