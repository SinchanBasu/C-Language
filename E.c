#include <stdio.h>

int main()
{

    float f,c;
    int type;

    printf("\n Convert temperature from Fahrenheit to Celsius");
    printf("\n Convert temperature from Celsius to Fahrenheit");
    printf("\n Enter your choice: ");
    scanf("%d",&type);

    if(type ==1){
        printf("\n Enter temperature in Fahrenheit: ");
        scanf("%f",&f);
        c= (f - 32) / 1.8;
        printf("\n Temperature in Celsius: %.2f",c);
    }
    else if(type ==2){
        printf("\nEnter temperature in Celsius: ");
        scanf("%f",&c);
        f= (c*1.8)+32;
        printf("\n Temperature in Fahrenheit: %.2f",f);
    }
    else{
        printf("\n Invalid Choice.");
    }
    return 0;
}

