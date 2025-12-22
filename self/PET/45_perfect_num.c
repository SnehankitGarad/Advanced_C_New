#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Number: \n");
    scanf("%d",&num);
    
    int sum=0;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    if(num == sum)
    {
        printf("Perfect Num\n");
    }
    else
    {
        printf("Not a perfect num\n");
    }
}