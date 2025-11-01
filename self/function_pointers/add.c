#include<stdio.h>
int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int evaluate(int(*fp)(int,int),int x,int y)
{
    return fp(x,y);
}
int main()
{
    printf("%d\n",evaluate(add,7,8));
     printf("%d\n",evaluate(sub,7,8));
}