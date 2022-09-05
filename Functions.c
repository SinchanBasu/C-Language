#include<stdio.h>
int cubesum(int a);
int main()
{
	int num,n,cube,d,sum;
	printf("Enter any number : ");
	scanf("%d",&d);
	for(num=100;num<=999;num++)
	{
		n=num;
		sum=0;
		while(n>0)
		{
			d=n%10;
			n/=10;
			cube=d*d*d;
			sum=sum+cube;
		}
		printf("The sum of cube of that number is : %d",sum);
	}
	return 0;
}
int cubesum(int a)
{
	int z;
	z=a*a*a;
	return z;
}
