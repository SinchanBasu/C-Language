#include <stdio.h>
#include <conio.h>
 
int main(){
    float length, width, area, perimeter;
    printf("Enter length of Rectangle \n");
    scanf("%f", &length);
    printf("Enter width of Rectangle \n");
    scanf("%f", &width);
    area = length * width;
    printf("Area of Rectangle : %f \n", area);
    perimeter = 2*(length + width);
    printf("Perimeter of rectangle : %f \n", perimeter);
    return 0;
}

