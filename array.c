#include<stdio.h>

int main()
{
    int a[5],sum=0;
    int flag=0;

    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }

    for(int i=0;i<5;i++)
    {
       printf("%d\t",a[i]);
    }
    

    for(int j=2;j<sum/2;j++)
    {
        if(sum%j==0)
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
    printf("\nsum is prime");
    else
    printf("\nsum is not prime");

    return 0;

}