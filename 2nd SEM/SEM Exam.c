//Question 11. Write a C Program to check whether a given string is palindrome or not.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i,j,len=0,temp=0;
	printf("Enter any string : ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	len++;
	i = 0;
	j = len-1;
	while(i<j)
	{
		if (str[i] != str[j])
		    {
		        temp=1;
		        break;
		    }
		    i++;
		j--;
	}
	if (temp == 0)
	    printf("This string is a palindrome");
	else
	    printf("This string is not a palindrome");
	return 0;
} 
