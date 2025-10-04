// fibonacci using recurssions

#include<stdio.h>
int fib(int n)
{
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
   int fibN=fib(n-1)+fib(n-2);
return fibN;
}
int main()
{
   printf("%d ",fib(9));
   return 0;
    }