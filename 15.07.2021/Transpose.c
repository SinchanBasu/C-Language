//Question 2.
#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],i,j,m,n;
	printf("Enter the number of rows : ");
	scanf("%d",&m);
	printf("Enter the number of columns : ");
	scanf("%d",&n);
	printf("Enter the elements of matrix of order %dx%d : ",m,n);
	for(i=0;i<m;i++)
	        for(j=0;j<n;j++)
	        	scanf("%d",&a[i][j]);
	 printf("The matrix is : \n",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
               printf("%d ",a[i][j]);
        }
        printf("\n");
    }
	for(i=0;i<n;i++)
	        for(j=0;j<m;j++)
	        {
	        	b[i][j]=a[j][i];
			}
	printf("The transpose of the matrix is :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		        printf("%d ",b[i][j]);
		printf("\n");
	}
	return 0;
} 
