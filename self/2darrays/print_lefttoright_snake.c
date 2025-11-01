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
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i%2==0)
            {
                printf("%d ",arr[i][j]);
            }
            else
            {
                printf("%d ",arr[i][c-j-1]);
            }
        }
        
    }

}