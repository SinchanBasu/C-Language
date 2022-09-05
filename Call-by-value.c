//Question 7.
#include <stdio.h> 
int func(int a, int b)
{
    a += b;
    printf("In func, a = %d b = %d\n", a, b);
}
int main()
{
    int x = 3, y = 8;
    func(x, y);
    printf("In main, x = %d y = %d\n", x, y);
    return 0; 
}
