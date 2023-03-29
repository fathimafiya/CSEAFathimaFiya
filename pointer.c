#include<stdio.h>

int main()
{
    int a=12;
    int *ptr;
    ptr=&a;
    printf("\nAdrress of the variable a:%p",ptr);
    printf("\nValue of a:%d",*ptr);
}