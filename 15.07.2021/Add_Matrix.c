//Question 1.
#include<stdio.h>
int main()
{
    int a[10][10],m,n,sum=0,i,j;
    printf("Enter the number of rows : ");
    scanf("%d",&m);
    printf("Enter the number of columns : ");
    scanf("%d",&n);
    printf("Enter the elements of the Matrix of order %dx%d : ",m,n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
               scanf("%d",&a[i][j]);
        }
    printf("The matrix is : \n\n",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
               printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
               sum=sum+a[i][j];
    printf("The sum of all elements in the matrix = %d",sum);
    return 0;
} 

