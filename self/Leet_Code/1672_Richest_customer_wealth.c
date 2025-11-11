#include<stdio.h>
#include<stdlib.h>
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) 
{
    int sum=0;
    int j;
    int pre=0;
   for(int i=0;i<accountsSize;i++)
   {
    sum=0;
    for(j=0;j<*accountsColSize;j++)
    {
        
        sum = sum + accounts[i][j];
        
    }
    if(pre < sum )
    {
        pre=sum;
    }
    }
    return pre;
    

}
int main()
{
    int row,col;
    printf("Enter the row: ");
    scanf("%d",&row);

    printf("Enter the col: ");
    scanf("%d",&col);

    int* arr[row];
    for(int i=0;i<row;i++)
    {
        arr[i] = malloc(col * sizeof(int));
    } 

    printf("Enter the elements: ");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Output is: ");
    int res = maximumWealth(arr, row, &col); 

    printf("%d ",res);
    

}