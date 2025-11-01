#include<stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    int c;
    scanf("%d",&c);

    int arr[r][c];
    printf("Enter the elements: ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    // Transpose 
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    //rotate 90degree
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c/2;j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr [i][c-j-1];
            arr[i][c-j-1] = temp;
        }
    }

    printf("Elements after 90 degree rotation are :");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    

}