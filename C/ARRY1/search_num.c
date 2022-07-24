#include<stdio.h>

int main()
{
    int i,key,flag=0,arr[10],pos;

    printf("Enter the numbers : ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }

   printf("ENter the number to search : ");
   scanf("%d",&key);
   
   for ( i = 0; i < 10; i++)
   {
    if(arr[i]==key)
    {
        pos=i+1;
    flag=1;
    break;
    }
   }
   if(flag==1)
   printf("Number found at %d position.",pos);
   else
   printf("Number not found");
   
    
    return 0;
}