#include<stdio.h>

int main()
{
    int n,result;
    printf("Enter the number : ");
    scanf("%d",&n);

   result = count(n);
   printf("Answer is : %d",result);
   return 0;


}

int count(int num)
{
    int c=0;
    if(num==0)
    return c;
    else
    c++;
    return  count(num/10);


}