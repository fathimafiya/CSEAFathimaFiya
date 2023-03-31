// DYNAMIC ARRAY 
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p,n,i;
    printf("\nEnter the size of array : ");
    scanf("%d",&n);
    p = (int *) calloc(n,sizeof(int));
    if(p==NULL)
    {
        printf("\nUnable to allocate memory\n");
        return -1;
    }
    else
    {
        printf("\nEnter the elements of array : ");
        for(i=0;i<n;i++)
        {
            scanf("%d",p+i);
        }
        printf("\nElements of array are\n");
        for(i=0;i<n;i++)
        {
            printf("%d\t",*(p+i));    // DEREFERENCING THE POINTER
        }
        printf("\n\nFirst element that is deleted, p[0]= %d",p[0]);
        for(i=1;i<n;i++)
        {
            p[i-1]=p[i];
        }
        p= (int *) realloc(p,(n-1)*sizeof(int));
        printf("\n\nModified Array\n");
        for(i=0;i<n-1;i++)
        {
            printf("%d\t",p[i]);
        }
        free(p);
        return 0;
    }

}