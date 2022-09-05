//Question 7.
#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j;
 int sum=0,series=1;
 printf("Enter total elements in the series : ");
 scanf("%d",&j);
 for(i=1; i<=j; i++)
 {
    printf(" %d",series);
    sum=sum+series;
    series=series+i;
 }
 printf("\nThe Sum of series is : %d",sum);
 getch();
 return 0; 
}
