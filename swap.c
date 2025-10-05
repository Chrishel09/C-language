#include<stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a,b;
    printf("enter the value of a:\n");
    scanf("%d",&a);
     printf("enter the value of b:\n");
    scanf("%d",&b);
    printf("before swapping:a=%d and b=%d \n",a,b);
    swap(&a,&b);
    printf("after swapping:a=%d and b=%d",a,b);
    return 0;
}