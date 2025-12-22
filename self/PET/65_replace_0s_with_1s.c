#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int digit =0;
    int multi = 1;
    int temp = num;

    while(num != 0)
    {
        int n = num %10;
        if(n == 0)
        {
            n = 1;
        }
        digit += n * multi; 
        multi *= 10; 
        num = num / 10;
    }
    printf("Original number is : %d\n",temp);
    printf("num after replacing is: %d\n",digit);
}
