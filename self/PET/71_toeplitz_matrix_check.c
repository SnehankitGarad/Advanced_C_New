#include<stdio.h>
int checktoe(int m,int n,int num[m][n])
{
    for(int  i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(num[i][j] != num[i-1][j-1])
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
     int m,n;
    printf("Enter m ,n: ");
    scanf("%d %d",&m,&n);

    int mat[m][n];
    printf("Enter the Elements: ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    if(checktoe(m,n,mat))
    {
        printf("Its Toeplitz\n");
    }
    else
    {
        printf("Not an Toeplitz\n");
    }
}