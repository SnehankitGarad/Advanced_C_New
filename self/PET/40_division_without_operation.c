#include<stdio.h>
int main()
{
    int num;
    int dividedby;
    int k = 0;
    int flag = 0;
    

    printf("Number to be divide:  ");
    scanf("%d",&num);

    int temp = num;
    printf("Number Divided by: ");
    scanf("%d",&dividedby);

    int count = 0;
    while(num >= dividedby)
    {
        num = num - dividedby;
        count++;
    }
    if(num <= dividedby && num != 0)
    {
        printf("----------------------------------------------------------------------------------------\n");
        flag = 1;
        k = temp - (dividedby * count);
        printf("%d is not completly divisible by %d \nremainder is: %d\n",temp,dividedby , k);
        printf("Quistion: %d\n",count);
        printf("----------------------------------------------------------------------------------------\n");

    }

    if(flag == 0)
    {
    printf("Output is: %d\n",count);
    }
}