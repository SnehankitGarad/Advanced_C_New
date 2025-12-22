#include<stdio.h>
int main()
{
    int num;
    printf("Enter the num: ");
    scanf("%d",&num);

    int final = (num % 10)+1;
    int ascending =1;
    int in = 10;
    int temp = num;

    while(num != 0)
    {
        int n = num % 10;
        
        if(n > in)
        {
            ascending = 0;
            break;
        }
        in = n;
        num = num / 10;
    }
    if(ascending != 0)
    {
        printf("%d is in ascending order\n",temp);
    }
    else
    {
        printf("%d is not in ascendinmg order\n",temp);
    }

}