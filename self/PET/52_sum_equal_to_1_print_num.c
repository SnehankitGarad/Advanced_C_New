#include<stdio.h>
int sumnum(int num)
{
    int sum=0;
    while(num != 0)
    {
        int n = num%10;
        sum = sum + n;
        num = num / 10;
    }
    if(sum <= 9)
    {
        return sum;
    }
    else
    {
        return sumnum(sum);
    }
}
int main()
{
    int num;
    printf("Enter the num: ");
    scanf("%d",&num);

    int final = sumnum(num);
    if(final == 1)
    {
        printf("%d sum is equal to 1\n",num);
    }
    else
    {
        printf("%d sum is not equal to 1\n",num);
    }
}