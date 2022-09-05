//Question 4.
#include <stdio.h>
int gcd(int x, int y);
int main()
{
    int N1, N2;
    printf("Enter the two numbers: \n");
    scanf("%d %d", &N1,&N2);

    printf("GCD of %d and %d is = %d", N1, N2, gcd(N1, N2));
    return 0;
}
int gcd(int x, int y) 
{
  if (y == 0) 
  {
  	return x;
  }
  else 
  {
    return gcd(y, x % y);
  }
} 
