#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int count=1,var;
    
    for(int i=1;i<=num;i++)
    {
        var=i;
        count = i;
        
        
        for(int j=i;j<=(2*num+1-i);j++)
        {
            printf("%d ",count);
            count = count+ var;
            var++;

        }
        printf("\n");
    }
}