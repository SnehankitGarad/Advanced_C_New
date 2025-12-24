#include<stdio.h>
int recur(int num)
{
    if(num ==0 )
    return 0;

    recur(num - 1);
    printf("%d ",num);
}
int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d",&num);

    recur(num);
}