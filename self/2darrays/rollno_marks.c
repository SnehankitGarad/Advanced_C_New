#include<stdio.h>
int main()
{
    int row;
    scanf("%d",&row);
    int colume;
    scanf("%d",&colume);

    printf("Rows are: %d\n",row);
    printf("Colume are: %d\n",colume);
    int A[row][colume];

    printf("Enter the Roll Number and Marks: ");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colume;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
    printf("Marks are:\nRoll marks\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colume;j++)
        {
            printf("%d ",A[i][j]);
        }
        
        printf("\n");
        
    }
}