#include<stdio.h>
int main() 
{
	float radius, area, circumference;
	printf("\n Enter the radius of Circle : ");
	scanf("%f", &radius);
	area = 3.14 * radius * radius;
	printf("\n Area of Circle : %f", area);
	circumference = 2 * 3.14 * radius;
	printf("\n Circumference of Circle is : %f",circumference);
	return (0);
}
