//Question 4.
#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k,m,n,o,p;
	printf("Enter the number of rows : ");
	scanf("%d",&m);
	printf("Enter the number of columns : ");
	scanf("%d",&n);
	printf("Enter the elements of first matrix : ",m,n);
	for(i=0;i<m;i++)
	        for(j=0;j<n;j++)
	                scanf("%d",&a[i][j]);
	printf("Enter the number of rows : ");
	scanf("%d",&o);
	printf("Enter the number of columns : ");
	scanf("%d",&p);
	printf("Enter the elements of second matrix : ",m,n);
	for(i=0;i<o;i++)
	        for(j=0;j<p;j++)
	                scanf("%d",&b[i][j]);
	for(i=0;i<m;i++)
	        for(j=0;j<p;j++)
	        {
	        	c[i][j]=0;
	        	for(k=0;k<n;k++)
	        	        c[i][j] += a[i][k] * b[k][j];
			}
	printf("The resultant matrix is : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		        printf("%d ",c[i][j]);
		printf("\n");
	}
	return 0;
} 
