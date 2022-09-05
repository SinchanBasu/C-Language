//Question 2.
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character : \n");
	scanf("%c",&ch);
	printf("The given Character is : %c",ch);
	if(ch>='A' && ch<='Z')
	{
		ch=ch+32;
		printf("\nThe character after conversation is : %c",ch);
	}
	else if(ch>='a' && ch<='z')
	{
		ch=ch-32;
		printf("\nThe character after conversation is : %c",ch);
	}
	else
	{
		printf("Please enter alphabet between A-Z or a-z only");
	}
	return 0;
} 
