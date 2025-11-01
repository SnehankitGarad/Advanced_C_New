#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int val;
    scanf("%d",&val);
    int n;
    scanf("%d",&n);

    int r1 = num & ((1<<n)-1);
    int r2 = val&(~((1<<n)-1));
    int r3 = r2 | r1;

    printf("%d\n",r3);

}