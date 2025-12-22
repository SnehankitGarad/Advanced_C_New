#include<stdio.h>
void reverse(int num)
{
    printf("Reverse binary: ");

    for(int i=0;i<=31;i++)
    {
        int pac = num & (1 << i);
        if(pac == 0)
        {
            printf("0 ");
        }
        else
        {
            printf("1 ");
        }
    }
    printf("\n");
}
void regular(int num)
{
    printf("Regular binary: ");
    for(int i=31;i>=0;i--)
    {
        int res = num & (1<<i);
        if(res == 0)
        {
            printf("0 ");
        }
        else
        {
            printf("1 ");
        }
    }
    printf("\n");
}
int main()
{
    int num;
    printf("Enter the Num: ");
    scanf("%d",&num);

    reverse(num);
    regular(num);
}