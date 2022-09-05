//Question 3.
#include <stdio.h>
float Sum(float x, float y)
{
    float result = x + y;
    return result;
}
int main()
{
    float a, b, c;
	printf("Enter any two values : ");
    scanf("%f %f", &a, &b);
	c = Sum(a, b);
    printf("\nThe sum of the two values is %.2f\n", c);
	return 0;
} 
