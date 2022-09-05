//Question 3.
#include <stdio.h>
int main()
{
   int arr[20], index, i, n;

   printf("Enter the number of elements in array : ");
   scanf("%d", &n);
   printf("Enter %d elements : \n", n);
   for (i=0; i<n; i++)
   scanf("%d", &arr[i]);
   printf("Enter the location to delete element : \n");
   scanf("%d", &index);
   if (index>=n+1)
    printf("Deletion not possible.\n");
   else
   {
      for (i=index-1; i<n-1; i++)
	  arr[i] = arr[i+1];
      printf("Resultant array : \n");
      for (i=0; i<n-1; i++)
	  printf("%d\n", arr[i]);
   }
   return 0;
} 
