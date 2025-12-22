  #include <stdio.h> 
 
int main() { 
    int rows, cols; 
     
    // Input the dimensions of the 2D array 
    printf("Enter the number of rows: "); 
    scanf("%d", &rows); 
    printf("Enter the number of columns: "); 
    scanf("%d", &cols); 
 
    int array[rows][cols]; // Declare the 2D array

     // Input the elements of the 2D array 
    printf("Enter the elements of the array:\n"); 
    for(int i = 0; i < rows; i++) { 
        for(int j = 0; j < cols; j++) { 
            printf("Element [%d][%d]: ", i, j); 
            scanf("%d", &array[i][j]); 
        } 
    } 

    int sum = 0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            sum += array[i][j];
        }
    }

    printf("Output is: %d\n",sum);
}