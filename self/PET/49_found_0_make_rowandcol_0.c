#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter the Row: ");
    scanf("%d",&row);

    printf("Enter the col: ");
    scanf("%d",&col);

    int arr[row][col];
    int rowzero[row],colzero[col];

    for(int i=0;i<row;i++)
    {
        rowzero[i] =0;
    }
    for(int j=0;j<col;j++)
    {
        colzero[j] = 0;
    }
    printf("Enter the array element: ");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]  == 0)
            {
              rowzero[i] = 1;
              colzero[j] = 1;
            }
        }
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(rowzero[i] || colzero[j])
            {
                arr[i][j]=0;
            }
        }
    }
    printf("Array is: \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}