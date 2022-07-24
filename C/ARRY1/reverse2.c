#include<stdio.h>

int main()
{
    int n,i,arr[n];
    printf("Enter the number of elements you want to reverse : ");
    scanf("%d",&n);

    printf("Enter the elements : \n");
    for ( i = 0; i < n; i++)
    {
       scanf("%d ",&arr[i]);
    }

    printf("Elements in reverse order are :\n");
    for ( i = n-1; i>=0; i--)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
    
}