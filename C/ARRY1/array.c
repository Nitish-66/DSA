#include<stdio.h>

int main()
{
    int i,arr[5];
    for ( i = 0; i < 5; i++)
    {
       printf("Enter the input for index %d: ",i);
       scanf("%d",&arr[i]);


    }
    printf("\n Array elements are :\n ");
    for ( i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
    }
    
    return 0;

}