//Question 5.
#include<stdio.h>
int TOH(int, char, char,char);
int main()
{
int n;
printf("Enter the no.of disks : ");
scanf("%d", &n);
TOH(n,'S','T','D');
}
int TOH(int n, char S, char T, char D)
{
	if(n==1)
	printf("\nMove the disk from %c to %c",S,D);
	else
	{
		TOH(n-1,S,D,T);
		printf("\nMove the disk from %c to %c",S,D);
		TOH(n-1,T,S,D); 
	}
} 
