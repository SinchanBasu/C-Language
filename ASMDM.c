//Question 5.
#include<stdio.h>
int main()
{
	int a,b,ch;
	char choice;
	printf("Enter any two numbers : ");
	scanf("%d%d",&a,&b);
do
	{
	printf("\n Press 1 to add two numbers ");
	printf("\n Press 2 to subtract two numbers ");
	printf("\n Press 3 to multiply two numbers ");
	printf("\n Press 4 to modulo divide two numbers");
	printf("\n Press 5 to divide two numbers \n");
	scanf("%d",&ch);
switch(ch)
	{
		case 1: printf("Sum: %d",a+b);
 		break;
		case 2: printf("Subtract :%d",a-b);
		break;
		case 3: printf("Multiply :%d",a*b);
 		break;
 		case 4: printf("Modulo :%d",a%b);
 		break;
		case 5: if(b==0)
		printf("\n Denominator cannot be zero");
        else
		printf("Divide :%d",a/b); 	
		break;
		default:printf("Wrong choice!");
	}
	printf("\n Do you want to continue? (Press y/n)");
	scanf(" %c",&choice);
	}
	while(choice=='y'); 
}
