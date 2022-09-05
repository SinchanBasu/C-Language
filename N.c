#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,rr1,rr2,real,imag;
	printf("Enter the values of a,b,c");
	scanf("%f%f%f",&a,&b,&c);
	d = b*b - 4*a*c;
	if(d>0)
	{
		printf("\n Roots are real");
		rr1= (-b + sqrt(d))/2*a;
		rr2= (-b - sqrt(d))/2*a;
		printf("Roots are : %f\t%f",rr1,rr2);
	}
	else if(d==0)
	{
		printf("\n Roots are equal");
		rr1=rr2= -b/2*a;
		printf("Roots are: %0.2f and %0.2f",rr1,rr2);
	}
	else
	{
		printf("\n Roots are imaginary");
		real = -b/2*a;
		imag = sqrt(-d)/2*a;
		printf("Roots are : %0.2f + %0.2fi and %0.2f - %0.2fi",real,imag,real,imag);
	}
	return 0;
}
