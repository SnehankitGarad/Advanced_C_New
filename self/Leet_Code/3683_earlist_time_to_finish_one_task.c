#include<stdio.h>
#include<stdlib.h>
int earliestTime(int** tasks, int tasksSize, int* tasksColSize) 
{
  int min =tasks[0][0] + tasks[0][1];
  int sum;
  for(int i=0;i<tasksSize;i++)
  {
    sum=0;
    for(int j=0;j<*tasksColSize;j++)
    {
        sum = sum + tasks[i][j];
    }
    if(sum < min)
    {
        min = sum;
    }
  }  
  return min;
}
int main()
{
    int row,col;
    printf("Enter the Rows: ");
    scanf("%d",&row);

    printf("Enter the colume: ");
    scanf("%d",&col);

    int** tasks = malloc(row*sizeof(int*));
    for(int i=0;i<row;i++)
    {
        tasks[i] = malloc(col*sizeof(int));
        for(int j=0;j<col;j++)
        {

        
        scanf("%d",&tasks[i][j]);
        }
    }

    int result = earliestTime(tasks, row, &col);
    printf("Output is: %d\n",result);

     for (int i = 0; i < row; i++)
        free(tasks[i]);
    free(tasks);
}