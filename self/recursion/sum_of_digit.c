#include <stdio.h>
int sum_of_digit(int n)
{
    if(n==0)
    return 0;
    return n%10 + sum_of_digit(n/10);
}
int main()
{
    int n;
    scanf("%d",&n);
    int sum = sum_of_digit(n);
    printf("%d",sum);
}