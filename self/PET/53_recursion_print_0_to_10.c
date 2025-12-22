#include<stdio.h>
int recur(int num)
{
    if(num < 0)
    {
        return num;
    }
    recur(num-1);
    printf("%d ",num);
    return 0;
}
int main()
{
    int num;
    scanf("%d",&num);

    recur(num);
}