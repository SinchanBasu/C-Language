#include<stdio.h>
int main()
{
	char choice;
	int roll=1,phy,chem,maths,total;
	do
	{
		printf("Enter the marks of three subjects for roll number %d : \n",roll);
		printf("Enter the marks obtained in  physics : ");
		scanf("%d",&phy);
		printf("Enter the marks obtained in chemistry : ");
		scanf("%d",&chem);
		printf("Enter the marks obtained in mathematics : ");
		scanf("%d",&maths);
		total = phy + chem + maths;
		printf("The total marks obtained by roll number %d is : %d",roll,total);
		roll++;
		fflush(stdin);
		printf("\n\n Do you want to continue?");
		scanf("%c",&choice);
		printf("\n");
	}
	while(choice == 'Y'|| choice == 'y');
	return 0;
}
