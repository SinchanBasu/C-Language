//Question 5.
#include <stdio.h>
int prime(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int function = prime(num);
    if (function)
        printf("%d is a prime number, the function returns %d\n", num, function);
    else
        printf("%d is not a prime number, the function returns %d\n", num, function);
    return 0;
}

int prime(int n)
{
    int i, c = 0;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            c++;
    }
    if (c || n == 1)
        return 0;
    return 1; 
}
