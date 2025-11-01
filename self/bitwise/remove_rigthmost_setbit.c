#include<stdio.h>
int main()
{
    int num;
    // int res=0;

    scanf("%d",&num);
    for(int i=0;i<32;i++)
    {
        int res = num & (1<<i);
        if(res != 0)
        {
            int final = num& ~(1<<i);
            printf("%d \n",final);
            break;
        }
    }
    
}