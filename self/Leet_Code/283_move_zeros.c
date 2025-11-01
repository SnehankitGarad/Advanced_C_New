#include<stdio.h>
void moveZeroes(int* arr, int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i] == 0)
            {
                
                
                    int temp=arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];

    printf("Enter the numbers: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    moveZeroes(arr,size);
}