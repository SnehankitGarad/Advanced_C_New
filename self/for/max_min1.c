#include <stdio.h>
int main()
{
    int n,num;
    scanf("%d",&n);
     
    int first;
    printf("enter the first number:");
    scanf("%d",&first);

    int max=first;
    int min=first;

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&num);
        if(max<num)
        max=num;

        else if(min>num)
        {
            min=num;
        }
    }
    printf("max no, : %d\n",max);
    printf("min no. : %d",min);+===