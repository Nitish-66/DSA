#include<stdio.h>

int Power(int b,int p)
{
    
    if(p==0)
    return 1;
    else
    return b* Power(b,p-1);
}
int main()
{
    int base,power,result;
    
    printf("enter the power:");
    scanf("%d",&power);
    printf("enter the base;");
    scanf("%d",&base);

    result=Power(base,power);
    printf("answer is : %d ",result);
    return 0;



}
