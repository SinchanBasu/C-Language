//Question 2
#include <stdio.h>

int main()
{
    int c = 0;
    int a = 0;
    int b = 1;
    int n, cal = 0;

    printf("Enter a number for getting a Fibonacci series: ");
    scanf("%d", &n);

    printf("The Fibonacci series is given below:\n\n");
    while (cal <= n)
    {
        printf("%d   ", c);
        a = b;
        b = c;
        c = a + b;
        cal = cal + c;
    }
    printf("\n");
    return 0; 
}
