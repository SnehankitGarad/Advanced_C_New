//A32 - WAP to check N th bit is set or not, If yes, clear the M th bit
#include<stdio.h>
int main()
{
    int num,N,M;
    scanf("%d",&num);

    printf("Enter the nth and mth bit: ");
    scanf("%d%d",&N,&M);

    int res = num & (1<<N);
    if(res == 0)
    {
        printf("%d\n",num);
    }
    else
    {
        int result = num & (~(1<<M));
        printf("%d\n",result); 
       
    }
}