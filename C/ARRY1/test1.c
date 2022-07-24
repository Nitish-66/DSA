#include<stdio.h>

int main()
{
    int i ,n,arr[5];
    int even=0,odd=0,sum=0,pro=1;

    printf("Enter the elements of the array : ");
    for ( i = 0; i < 5; i++)
    {
       scanf("%d",&arr[i]);
    }
    for ( i = 0; i <5; i++)
 {
   if(arr[i]%2==0)
   sum=sum+arr[i];
   else
   pro=pro*arr[i];
 }
 printf("\nTotal Even=%d and total odd=%d",sum,pro);
 return 0;

}