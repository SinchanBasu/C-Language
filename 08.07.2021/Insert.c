//Question 2.
#include<stdio.h>
int main()
{
    int arr[50],n,a,b,i,min,max;
    printf("Enter the number of elements stored in the array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d element in the array : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the position to enter the element : ");
    scanf("%d", &a);
    printf("Enter the value of the element : ");
    scanf("%d",&b);
    if(a>n)
    printf("\nThis position does not occur in the array.");
    else
    {
    for(i=0;i<n;i++)
    {
        if(i==a)
        arr[i] = b;
    }
    printf("\nThe modified array is: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    }
} 
