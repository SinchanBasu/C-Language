//Question 4.
#include<stdio.h> 
int main()
{
 int size, i, a[20];
 int Even_Sum = 0, Odd_Sum = 0;
 
 printf("Enter the size of an array : ");
 scanf("%d", &size);
 
 printf("Enter the array elements : ");
 for(i = 0; i < size; i++)
 {
      scanf("%d", &a[i]);
 }
  
 for(i = 0; i < size; i ++)
 {
   if(a[i] % 2 == 0)
   {
 	Even_Sum = Even_Sum + a[i];
   }
   else
   {
 	Odd_Sum = Odd_Sum + a[i];
   }
 }
  
 printf("The sum of even numbers in the array = %d ", Even_Sum);
 printf("\nThe sum of odd numbers in the array = %d ", Odd_Sum);
 return 0;
} 
