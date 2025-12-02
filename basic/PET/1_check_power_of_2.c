#include<stdio.h>
#include<stdbool.h>
int checkpower(int n)
{
    while(n % 2 ==0)
    {
        n = n/2;
    }
    return n ==1;
}
int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);

    int res = checkpower(num);
    if(res)
    {
        printf("It is Power of 2\n");

    }
    else
    {
        printf("It is not power of 2\n");
    }


   // bool res = (num & (num-1))==0;

    // if(res)
    // {
    //     printf("It is power of 2");
    // }
    // else
    // {
    //     printf("It is not a power of 2");
    // }
}