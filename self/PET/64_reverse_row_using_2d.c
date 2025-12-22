#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter the no. of Row: ");
    scanf("%d",&row);

    printf("Enter col: ");
    scanf("%d",&col);

    int arr[row][col];
    printf("Enter array: ");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col/2;j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][col-j-1];
            arr[i][col-j-1] = temp;
        }
    }

    printf("Reversed array is: ");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}