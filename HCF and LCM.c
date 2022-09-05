//Question 6.
#include<stdio.h>
void lcm_gcd(int ,int);
main()
{
    int a,b;
 
    printf("Enter two Numbers\n");
    scanf("%d %d",&a,&b);
    lcm_gcd(a,b);
} 
void lcm_gcd(int i,int j)
{
    int gcd,lcm,remainder,numerator,denominator;
    if (i>j)
    {
        numerator=i;
        denominator=j;
    }
    else
    {
        numerator=j;
        denominator=i;
    }
    remainder=numerator%denominator;
    while (remainder!=0)
    {
        numerator=denominator;
        denominator=remainder;
        remainder=numerator%denominator;
    }
    gcd = denominator;
    lcm = (i*j)/gcd;
 
    printf("GCD of %d and %d = %d\n",i,j,gcd);
    printf("LCM of %d and %d = %d\n",i,j,lcm);
} 
