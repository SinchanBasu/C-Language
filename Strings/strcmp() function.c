// P10.6 Program to understand the work of strcmp() function.
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10],str2[10];
	printf("Enter two strings : ");
	gets(str1);
	gets(str2);
	if((strcmp(str1,str2))==0)
	        printf("Strings are same\n");
	else
	        printf("Strings are not same\n");
	return 0;
}


/* Array Version
int astrcmp(char str1[],char str2[])
{
    int i;
    for(i=0; str1[i]==str2[i]; i++)
             if(str1[i]=='\0')
                    return 0;
    return (str1[i]-str2[i]);
}
*/

/* Pointer Version
int pstrcmp(char *str1,char *str2)
{
     while((*str1=*str2) !='\0')
	 {
	       str1++;
		   str2++;
     }
     return str1;
}
