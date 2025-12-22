#include<stdio.h>
int pascal(int n)
{
    for(int i=0;i<=n;i++)
    {
        int first = 1;
        for(int j=0;j<=i;j++)
        {
            printf("%d ",first);
            first = first * (i-j)/(j+1);
        }
        printf("\n");

    }
    return 0;
}
int main()
{
    int n;
    printf("Enter the Size: ");
    scanf("%d",&n);
    pascal(n);
}