#include<stdio.h>

int main()
{
    int i ,n,arr[10];
    int even=0,odd=0;

    printf("Enter the elements of the array : ");
    for ( i = 0; i < 10; i++)
    {
       scanf("%d",&arr[i]);
    }
    for ( i = 0; i <10; i++)
 {
   if(arr[i]%2==0)
   even++;
   else
   odd++;
 }
 printf("\nTotal Even=%d and total odd=%d",even,odd);
 return 0;

}