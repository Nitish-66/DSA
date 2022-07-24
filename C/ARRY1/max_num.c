//find the max number of an array 
#include<stdio.h>

int main()
{
    int i,arr[10],max;

    printf("Enter the numbers : ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for ( i = 0; i < 5; i++)
    {
         if(arr[i]>max)
         max=arr[i];
    }
    printf("MAx number is : %d ",max);
    
    return 0;
}