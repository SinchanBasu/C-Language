#include <stdio.h>    
int main()  
{  
    int n, i, sum = 0; 
    printf(" Enter a positive number: ");  
    scanf("%d", &n);  
    for (i = 0; i <= n; i++)  
    {  
        sum = sum + i;
    }   
    printf("\n Sum of the first %d number is: %d", n, sum);   
    return 0;  
}  
