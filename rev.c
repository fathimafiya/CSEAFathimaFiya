#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];


   
    for(int i=0;i<strlen(a);i++)
    {
        scanf("%c",&a[i]);
    }

    for(int k=0;k<strlen(a);k++)
    {
        if(a[k]=='0')
        a[k]='$';
    }

    for(int j=strlen(a)-1;j>=0;j--)
    {
        printf("%c\t",a[j]);
    }
    return 0;
}