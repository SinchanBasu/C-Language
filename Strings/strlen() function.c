// P10.5 strlen() function.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	printf("Enter a string : ");
	gets(str);
	printf("Length of the string is : %u\n",strlen(str));
	return 0;
}


/* Array Version
unsigned int astrlen(char str[])
{
    int i=0;
    while(str[i] !='\0')
             i++;
    return i;
}
*/

/*Pointer Version
unsigned int pstrlen(char *str)
{
    char *p=str;
    while(*p !='\0')
         p++;
    return p-str;
}
*/
