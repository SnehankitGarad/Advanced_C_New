#include<stdio.h>
int main()
{
    int start,end;
    printf("Enter the Start: ");
    scanf("%d",&start);

    printf("Enter the end: ");
    scanf("%d",&end);

    //int num = start;
    int sum;
    int max = start;

    for(int i = start;i<=end;i++)
    {
        int num = i;
        sum = 0;
        while(num != 0)
        {
            int n = num % 10;
            sum = sum * 10 + n;
            num = num / 10;
        }
        if(i == sum && sum > max)
        {
            max = sum;
        }
    }

    printf("Largest is: %d\n",max);
}