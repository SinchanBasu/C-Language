//Question 2.
#include<stdio.h>
int main()
{
	int n,t,s,r;
	printf("Enter a number : ");
	scanf("%d",&n);
	t=n;
	s=0;
	while(n>0)
	{
		r=n%10;
		s=(s*10)+r;
		n=n/10;
	}
	if(t==s)
	    printf("%d is a palindrome number",t);
	else
	    printf("%d is not a palindrome number",t);
	return 0; 
}
