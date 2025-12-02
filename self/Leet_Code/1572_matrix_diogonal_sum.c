#include <stdio.h>
#include <stdlib.h>

int diagonalSum(int** mat, int matSize, int* matColSize)
{
    
    int result[matSize][matSize];
    for(int i=0;i<matSize;i++)
    {
        for(int j=0;j<matSize;j++)
        {
            result[i][j] = 1;
        }
    }
    int sum = 0;
    for(int i=0;i<matSize;i++)
    {
        for(int j=i;j<i+1;j++)
        {
            if(result[i][j] == 1)
            {
                result[i][j] = mat[i][j];
                sum+=mat[i][j];
            }
        }
    }
    for(int i=0;i<matSize;i++)
    {
        for(int j=matSize-i-1;j>matSize-i-2;j--)
        {
            if(result[i][j] == 1 && i != j)
            {
                result[i][j] = mat[i][j]; 
                sum+=mat[i][j];
            }
        }
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter matrix size: ");
    scanf("%d", &n);

    
    int** mat = (int**)malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++)
        mat[i] = (int*)malloc(n * sizeof(int));

    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    }

    int colSize = n;

    int result = diagonalSum(mat, n, &colSize);

    printf("Diagonal Sum = %d\n", result);

    
    for(int i = 0; i < n; i++)
        free(mat[i]);
    free(mat);

    return 0;
}
