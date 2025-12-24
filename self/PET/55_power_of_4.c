#include<stdio.h>
int ispower(int num , int x)
{
    if(num == 1)
    {
    return 1;
    }

    if(num < x || num % x != 0)
    {
    return 0;
    }

    return ispower(num/x,x);
}
int main()
{
    int num,x;
    printf("Enter the num: ");
    scanf("%d",&num);

    printf("Enter the x: ");
    scanf("%d",&x);

    // while(num > 1))
    // {
    //     num = num / x;
    // }
    if(ispower(num,x))
    {
        printf("Num is power of %d\n",x);
    }
    else
    {
        printf("Not a power \n");
    }
}