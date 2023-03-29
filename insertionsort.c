#include<stdio.h>
void insort(int a[50],int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        j=i-1;
        int temp=a[i];
        while(j>=0 && temp<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("Sorted Array: ");
    for(i=0;i<n;i++)
    {
         printf("%d ",a[i]);
    }
}
int main()
{
    int arr[50],n,i;
    printf("Enter the no of elements: ");
    scanf("%d",&n);
    printf("Enter the array: ");
    for(i=0;i<n;i++)
        scanf("%d ",&arr[i]);
    insort(arr,n);
    return 0;
}