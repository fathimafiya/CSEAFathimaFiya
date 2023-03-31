// string palindrome

#include<stdio.h>
#include<string.h>

void main()
{
    char s[50];
    printf("\n\nEnter a string : ");
    gets(s);
    strlwr(s);  // to ignore case sensitivity
    int n=strlen(s),f=1;
    for(int i=0,j=n-1;i<n/2;i++,j--)
    {
        if(s[i]!=s[j])
        {
            f=0;
            break;
        }
    }
    if(f==0)
    {
        printf("\nString is not a palindrome.\n\n");
    }
    else
    {
        printf("\nString ia a palindrome.\n\n");
    }
}