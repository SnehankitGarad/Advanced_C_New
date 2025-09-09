#include <stdio.h>
int count_of_digits(int n,int count)
{
    if(n==0)
    return 0;

    count_of_digits(n/10);
    return count++;
}
int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    int res = count_of_digits(n , count);
    printf("%d",res);
}
