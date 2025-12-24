#include<stdio.h>
int isprime(int n)
{
    if(n <2)
    {
        return 0;
    }

    for(int i=2;i*i<n;i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int l,h;
    printf("Enter the l and m: ");
    scanf("%d %d",&l,&h);

    for(int i= l;i<=h;i++)
    {
        if(isprime(i))
        {
            printf("%d ",i);
        }
    }
    printf("\n");
}