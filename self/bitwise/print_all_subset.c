#include<stdio.h>
#include<math.h>
int main()
{
    int num[] = {1,2,3};
    int n=3;
    int subset = 1<<n;
    int j;

    for(int i=0;i<subset;i++)
    {
        printf("{ ");
        for(j=0;j<n;j++)
        {
            if(i & (1<<j))
            {
                printf("%d ",num[j]);
            }
        }
        printf("}\n");
    }
}