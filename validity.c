#include<stdio.h>
#include<string.h>

int main()
{
    char array[10];
    int valid=0;
    int flag=0;

    printf("\nenter the string:");
    scanf("%s",array);

    for(int i=0;i<strlen(array);i++)
    {
        if(array[i]=='*')
         valid++;
        else if(array[i]=='#')
         valid--;
        else
        {
         flag=1;
         break;
        }
         
    }
    if(valid==0 && flag==0)
    printf("\nString is valid");
    else
    printf("\nString is not valid");

    printf("\nvalid=%d",valid);

    return valid;

}