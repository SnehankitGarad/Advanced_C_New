#include <stdio.h>
int fibonacci(int n)
{
    if(n==1)
    return 1;
    else if(n==0)
    return 0;

   return fibonacci(n-2) + fibonacci(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);

   int ret = fibonacci(n);
   printf("%d is of number %d ",n,ret);
}