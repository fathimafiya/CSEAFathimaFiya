#include<stdio.h>
#include<ctype.h>
#include<string.h>

void main()
{
    char s[50];
    int c=1;
    printf("\n\nEnter a string : ");
    gets(s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==' '&&isalnum(s[i+1])||s[i]==','||s[i]=='&'||s[i]==':'||s[i]==';'||s[i]=='!')
        {
            c++;
        }
    }
    printf("\nNumber of words = %d",c);
}