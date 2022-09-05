//Question 8.
#include <stdio.h>

int main()
{
   int x, y;
   int product = 0; 

   printf("Enter two integers : ");
   scanf("%d%d", &x, &y);
   while(y != 0)
   {
      product += x;
      y--;
   }

   printf("The product of the two numbers is : %d\n", product);
   return 0; 
}
