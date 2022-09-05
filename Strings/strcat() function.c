// P10.8 strcat() function.
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("Enter two strings : ");
	gets(str1);
	gets(str2);
	strcat(str1,str2);
	printf("First String : %s\tSecond String : %s\n",str1,str2);
	strcat(str1,"_one");
	printf("Now first string is : %s\n",str1);
	return 0;
}

/*Array Version
char *astrcat(char str[],char str[])
{
     int i=0,j=0;
     while(str1[i] !='\0')    //go to the end of first string
            i++;
     while(str1[i++] = str2[j++])    //Add second string at the end of first
              ;
     return str1;
}
*/

/* Pointer Version
char *pstrcat(char *str1,char *str2)
{
    char *p=str1;
    while(*p!='\0')
            p++;
    while(*p++ = *str2++)
              ;
    return str1;
}
*/
