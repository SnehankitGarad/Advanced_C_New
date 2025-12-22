#include<stdio.h>
int main()
{
    int bin,count = 0,mul = 1;
    printf("Enter the Binary Num: ");
    scanf("%d",&bin);

    if(bin < 0)
    {
        printf("Invalid Number\n");
        return 0;
    }
    while(bin > 0)
    {
        int n = bin % 10;
        if(n != 0 && n != 1)
        {
            printf("Invalid Number\n");
            return 0;
        }
        count = count + n * mul;
        mul = mul * 2;
        bin = bin /10; 
    }

    printf("Decimal Num is: %d\n",count);
}