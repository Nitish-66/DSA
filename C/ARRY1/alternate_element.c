#include<stdio.h>

int main()
{
    int i,arr[10];

    printf("Enter the numbers : ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }

    for ( i = 0; i < 5; i=i+2)
    {
        printf("%d",arr[i]);
    }
    
    return 0;
}