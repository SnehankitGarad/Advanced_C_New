#include<stdio.h>
int main()
{
    int start,goal;
    scanf("%d",&start);
    scanf("%d",&goal);

    int ans = start^goal;
    int count=0;
    for(int i=0;i<32;i++)
    {
        if(ans & (1<<i))
        {
            count++;
        }
    }
    printf("Minimum bit flips: %d\n",count);
}