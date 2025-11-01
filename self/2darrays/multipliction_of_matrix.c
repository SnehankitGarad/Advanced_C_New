#include<stdio.h>
int main()
{
    int r,c,p,q;
    printf("Enter the row of 1st matrix: ");
    scanf("%d",&r);
    printf("Enter the column of 1st matrix: ");
    scanf("%d",&c);
    int a[r][c];

    printf("Enter the elments of 1st matrix: ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the row of 2nd matrix: ");
    scanf("%d",&p);
    printf("Enter the column of 2nd matrix: ");
    scanf("%d",&q);
    int b[p][q];

    printf("Enter the elments of 2nd matrix: ");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int res[r][q];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<q;j++)
        {
            res[i][j] = 0;
            for(int k=0;k<c;k++)
            {
                res[i][j] += a[i][k] * b[k][j];
            }
        }

    }

    printf("After multiplication matrix is : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}