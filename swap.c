#include<stdio.h>

int main()
{
    int *p1,*p2;
    int t,a,b;
    a=10;
    b=20;
    p1=&a;
    p2=&b;
    t=b;
    b=*p1;
    a=t;

    printf("a=%d, b=%d",a,b);
}