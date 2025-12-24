#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter the row and col: ");
    scanf("%d %d",&row,&col);

    int arr[row][col];
    printf("Enter the elements: ");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int diag = 0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
        diag += arr[i][i];
    }
    
    printf("Diagonal are: %d\n",diag);
}