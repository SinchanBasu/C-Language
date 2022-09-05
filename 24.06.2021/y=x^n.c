//Question 2.
#include <stdio.h>
int power (int, int);
int main()
{
    int pow, num;
    int result;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter it's power: ");
    scanf("%d", &pow);
    result = power(num, pow);
    printf("The result is %d", result);
    return 0;
}
 
int power (int num, int pow)
{
    if (pow)
    {
        return (num * power(num, pow - 1));
    }
    return 1;
} 
