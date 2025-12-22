#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);

    int pos;
    printf("Enter the Position: ");
    scanf("%d",&pos);

    int res = num & (~(1 << pos-1));

    printf("Output is %u",res);
}