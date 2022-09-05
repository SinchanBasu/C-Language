//Question 1.
#include <stdio.h>

void fun(int, int);
int main()
{
    int x, n;
    printf("Enter the values of x and n : ");
    scanf("%d %d", &x, &n);
    fun(x, n);
}
void fun(int a, int b)
{
    int i, f = 1;
    for (i = 0; i < b; i++)
    {
        f = f * a;
    }
    printf("The result is %d\n", f);
} 
