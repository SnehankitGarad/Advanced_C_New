#include<stdio.h>
int evendig(int num)
{
    int sum =0;
    while(num != 0)
    {
        int n = num%10;
        if(n % 2 == 0)
        {
            sum = sum + n;
        }
        num = num /10;

    }
    //printf("Sum is: %d\n",sum);
    if(sum <= 9)
    {
        return sum;
    }
    else
    {
        return evendig(sum);
    }
}
int main()
{
    int num;
    printf("Enter the Num: ");
    scanf("%d",&num);

    int final = evendig(num);
    printf("Output is: %d\n",final);
}