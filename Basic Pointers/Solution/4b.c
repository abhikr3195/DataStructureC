// :) :)
//Fibonnaci
#include <stdio.h>
int fib(int);
int main()
{
    int n,i=0,c;
    printf("Enter the number to get it fibonacci\n");
    scanf("%d",&n);
    for(c=1;c<=n;c++)
    {
        printf("%d ",fib(i));
        i++;
    }
    
}
int fib(int a)
{
    if(a<=1)
    return a;
    return fib(a-1)+fib(a-2);
   
}
