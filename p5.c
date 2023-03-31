#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    char *p;
    p=(char *) malloc(20);
    strcpy(p,"Programming");
    printf("\n%s, Address = %u\n",p,p);
    p=(char*) realloc(p,40);
    strcat(p," In C");
    printf("\n%s,  Address = %u\n\n\n",p,p);
    free(p);
}