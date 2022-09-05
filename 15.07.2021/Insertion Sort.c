//Question 6.
#include <stdio.h>
int main()
{
  int n, array[1000], a, b, key, flag = 0;

  printf("Enter number of elements : \n");
  scanf("%d", &n);
  printf("Enter %d integers : \n", n);
  for (a=0; a<n; a++)
    scanf("%d", &array[a]);
  for (a=1; a<=n-1; a++) 
{
    key = array[a];

    for (b=a-1; b>=0; b--) 
	{
      if (array[b] > key) 
	  {
        array[b+1]= array[b];
        flag= 1;
      }
      else
	  break;
    }
    if (flag)
      array[b+1]= key;
}
  printf("Sorted list in ascending order using insertion sort is : \n");
  for (a=0; a<=n-1; a++) 
  {
    printf("%d\n", array[a]);
  }
  return 0;
} 


