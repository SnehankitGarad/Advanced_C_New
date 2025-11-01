#include<stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    int c;
    scanf("%d",&c);

    int arr[r][c];
    printf("Enter the elements:\n ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<c;i++)
    {
        if(i%2==0)
        {
            for(int j=r-1;j>=0;j--)
            {
            printf("%d ",arr[j][i]);
            }
        }
        else
        {
            for(int k=0;k<r;k++)
            {
            printf("%d ",arr[k][i]);
            }
        }
        
    }

}