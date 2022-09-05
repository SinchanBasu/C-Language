//Question 6.
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20];
	int i,j,len=0,flag=0;
	printf("Enter any string : ");
	gets(s1);
	for(i=0;s1[i]='\0';i++)
	len++;
	i = 0;
	j = len-1;
	while(i<j)
	{
		if (s1[i] != s1[j])
		    {
		        flag=1;
		        break;
		    }
		    i++;
		j--;
	}
	if (flag == 0)
	    printf("This string is a palindrome");
	else
	    printf("This string is not a palindrome");
	return 0;
} 
