#include<stdio.h>
int main()
{
    int num;
    int count=0;
    scanf("%d",&num);
    for(int i=0;i<=31;i++)
    {
        int res = num &(1<<i);
        if(res==0)
        {
            count++;
        }
        else{
            break;
        }
    }
    printf("%d ",count);
}