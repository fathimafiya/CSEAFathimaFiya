#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=10, *p=malloc(n);
    if(p=NULL)
    {
        printf("\nUnable to allocate memory\n");
        return -1;
    }
    printf("\nAllocated %d bytes of memory\n",n);
    printf("%p\t%p\t%p\t",p,p+1,p+2);
    return 0;
}