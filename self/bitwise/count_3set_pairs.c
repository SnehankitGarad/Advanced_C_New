#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int i=0;
    int count=0;
    while(i<=29)
    {
        if(((num & (7<<i))>>i)==7)
        {
            count++;
        }
        i++;
    }
    printf("Count: %d\n",count);
}