#include<stdio.h>
int main()
{
    int oct,count = 0,base = 1;
    printf("Enter the Octa Num: ");
    scanf("%d",&oct);

    if(oct < 0)
    {
        printf("Invalis Octal Number\n");
        return 0;
    }
    while(oct > 0)
    {
        int n = oct % 10;
        if(n > 7)
        {
            printf("Invalid num\n");
        }
        count = count + n * base;
        base = base * 8;
        oct = oct / 10;
    }

    printf("Decimal num is: %d\n",count);
}