//Question 5.
#include <stdio.h>
int main()
{
  int array[100], n, a, b, position, tmp;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (a=0; a<n; a++)
    scanf("%d", &array[a]);
  for (a=0; a<(n-1); a++) 
  {
    position= a;
    for (b=a+1; b<n; b++)
    {
      if (array[position] > array[b])
        position= b;
    }
    if (position!= a)
    {
      tmp = array[a];
      array[a]= array[position];
      array[position]= tmp;
    }
  }
  printf("The sorted list in ascending order using selection sort is:\n");
  for (a=0; a<n; a++)
    printf("%d\n", array[a]);
  return 0;
} 
