#include<stdio.h>
#include<stdlib.h>
 
int** flipAndInvertImage(int** image, int imageSize, int* imageColSize, int* returnSize, int** returnColumnSizes)
{
    for(int i=0;i<imageSize;i++)
    {
        for(int j=0;j<imageColSize[i]/2;j++)
        {
            int temp = image[i][j];
            image[i][j] = image[i][imageColSize[i]-j-1]; 
            image[i][imageColSize[i]-j-1] = temp;
        }
    }    
    for(int i=0;i<imageSize;i++)
    {
        for(int j=0;j<imageColSize[i];j++)
        {
            if(image[i][j] == 0)
            {
                image[i][j] = 1;
            }
            else
            {
                image[i][j] = 0;
            }
        }
    }
    *returnSize = imageSize;
    *returnColumnSizes = imageColSize;

    return image;

}
int main()
{
    int row,col;
    printf("Enter the row and col: ");
    scanf("%d %d",&row,&col);

    int** image = malloc(row*sizeof(int*));
    int* imageColSize = malloc(row*sizeof(int));
    for(int i=0;i<row;i++)
    {
        image[i]=malloc(col*sizeof(int));
        imageColSize[i] = col;
        for(int j=0;i<col;j++)
        {
            scanf("%d",&image[i][j]);
        }
    }

    int** result = flipAndInvertImage(image, row, col, &row, &col);

    printf("Output is: ");
    for(int i =0;i<row;i++)
    {
        for(int j=0;j<imageColSize[i];j++)
        {
            printf("%d",result[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<row;i++)
    {
        free(image[i]);
    }

    free(image);
    free(imageColSize);
    return 0;
}