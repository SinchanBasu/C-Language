//Question 3.
#include<stdio.h>
int lcm(int a, int b);
int main()
{
    int i, j, LCM;
    printf("Enter any two numbers : ");
    scanf("%d%d", &i, &j);
    if(i > j)
        LCM = lcm(j, i);
    else
        LCM = lcm(i, j);
        
    printf("LCM of %d and %d = %d", i, j, LCM);
}
int lcm(int a, int b)
{
    int mul = 0;
    mul += b;
    if((mul % a == 0) && (mul % b == 0))
    {
        return mul;
    }
    else 
    {
        return lcm(a, b);
    }
} 
