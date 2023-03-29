#include<stdio.h>

int main()
{
    int a,b,sum;
    float c;
    a=100;
    b=200;

    int *p1,*p2;

    p1=&a;
    p2=&b;

    sum=*p1+*p2;
    c=*p2/ *p1;

    printf("\nsum of the number is %d",sum);
    printf("\n c=%f",c);
} 