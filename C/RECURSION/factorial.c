//program to find factorial of a number using recursion


#include<stdio.h>

int factorial(int n)
{
    if(n==1)
    return 1;
    return n*factorial(n-1);
}

int main()
{
   int num;
    int fact=0;
    
    printf("Enter a number : ");
    scanf("%d",&num);

    fact=factorial(num);
    printf("factorial of %d is : %d  ",num,fact);
    printf("\n");
    return 0;




}