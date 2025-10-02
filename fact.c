// factorial using recurssion

#include<stdio.h>
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
   int f=fact(n-1);
   int factorial=f*n;
   return factorial;
}
int main()
{
    printf("factorial of 5 is %d",fact(5));
    return 0;
}