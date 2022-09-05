//Question 1.
#include<stdio.h>
#include<math.h>
int main()
{
	int i,j;
	printf("Enter a number : ");
	scanf("%d",&j);
	for (i=2; i<=sqrt(j); i++)
	          if(j%i==0)
	                  break;
	if(i>sqrt(j))
	        printf("%d is a prime number\n",j);
	else
	        printf("%d is not a prime number\n",j);
	return 0; 
	
}
