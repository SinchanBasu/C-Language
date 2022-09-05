//Question 3.
#include<stdio.h>
int main()
{
	int i,j,m,n,a[10][10],b[10][10],c[10][10];
	printf("Enter the number of rows : ");
	scanf("%d",&m);
	printf("Enter the number of columns : ");
	scanf("%d",&n);
	printf("Enter the elements of first matrix : \n",m,n);
	for(i=0;i<m;i++)
	        for(j=0;j<n;j++)
	                scanf("%d",&a[i][j]);
	printf("Enter the elements of second matrix : \n",m,n);
	for(i=0;i<m;i++)
	        for(j=0;j<n;j++)
	                scanf("%d",&b[i][j]);
	for(i=0;i<m;i++)
	        for(j=0;j<n;j++)
	               c[i][j]=a[i][j] + b[i][j];
	printf("The resultant matrix is : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		        printf("%d ",c[i][j]);
		printf("\n");
	}
	return 0;
} 
