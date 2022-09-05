//Question 3.
#include <stdio.h>
int main()
    {
        int arr[100], i, num;
        printf("Enter the size of an array : ");
 
        scanf("%d", &num);
        printf("Enter the elements of the array : ");
 
        for (i = 0; i < num; i++) 
        {
            scanf("%d", &arr[i]);
        }
 
        printf("Even numbers in the array are : ");
        for (i = 0; i < num; i++) 
        {
            if (arr[i] % 2 == 0) 
            {
                printf("%d ", arr[i]);
            }
        }
 
        printf("\nOdd numbers in the array are : ");
        for (i = 0; i < num; i++) 
        {
            if (arr[i] % 2 != 0) 
            {
                printf("%d ", arr[i]);
            }
        }
        return 0;
    } 
