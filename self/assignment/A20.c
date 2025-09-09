#include <stdio.h>
// void negative_fibonacci(int a, int b, int num,int total)
// {
//     if(a>=num && a<= -num)
//     {
//         printf("%d ",a);
//         // if(total < num)
//         // return;
//         negative_fibonacci(b,total,num,a-b);
//     }
// }
void negative_fibonacci(int a, int b, int num,int total)
{
    if(a >= num && a<= -num)
    {
        printf("%d ",a);
        total = a - b;
        // a = b;
        // b = total;
        negative_fibonacci(b,total,num,total);
    }
}
int main()
{
    int num;
    scanf("%d",&num);
    int a=0;
    int b=1;

    if(num<0)
    {
        negative_fibonacci(a,b,num,0);
    }
    else
    {
        printf("Invalid input");

    }
}