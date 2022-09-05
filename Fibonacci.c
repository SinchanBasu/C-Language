//Question 2.
#include <stdio.h>
int main() 
{
    int a = 0, b = 1, next = 0, n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d %d ", a, b);
    next = a + b;

    while (next <= n) 
	{
        printf("%d ", next);
        a = b;
        b = next;
        next = a + b;
    }
    return 0; 
}
