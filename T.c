//Question 1
#include <stdio.h>

int main()
{
    int i = 2, j = 2, n, value, sum = 0, count = 0;
    printf("Enter a range for summation : ");
    scanf("%d", &n);
    printf("The prime numbers are : \n");
    while (count < n)
    {
        value = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                value++;
            }
        }
        if (!value)
        {
            sum += i;
            count++;
            printf("%d  ",i);
        }
        i++;
    }
    printf("\nThe sum of prime numbers is : %d\n", sum);
    return 0; 
}
