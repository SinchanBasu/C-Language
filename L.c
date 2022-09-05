#include<stdio.h>
int main()
{
	float s1,s2,s3,s4,total,perc;
	char grade;
	printf("Enter the marks of 4 subjects : ");
	scanf("%f%f%f%f",&s1,&s2,&s3,&s4);
	total = s1+s2+s3+s4;
	perc = total/4;
	if(perc>=85)
	        grade='A';
	else if(perc>=70)
	        grade='B';
	else if(perc>=55)
	        grade='C';
    else if(perc>=40)
            grade='D';
    else
            grade='F';
    printf("Percentage is %f,Grade is %c\n",perc,grade);
    return 0;
}
