#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter Row and Col: ");
    scanf("%d %d",&row,&col);

    int arr[row][col];
    printf("enter the elements: ");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<row;i++)
    {
        int rowcount = 0;
        for(int j=0;j<col;j++)
        {
            rowcount += arr[i][j];
        }
        printf("sum of Row %d is: %d",i,rowcount);
        printf("\n");
    }
    printf("\n");

    for(int i=0;i<col;i++)
    {
        int colcount = 0;
        for(int j=0;j<row;j++)
        {
            colcount += arr[j][i];
        }
        printf("Sum of  col %d is: %d",i,colcount);
        printf("\n");
    }
}