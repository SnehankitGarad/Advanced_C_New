#include <stdio.h>
void rotate_array(int size,int k,int* arr)
{
    for(int i=0;i<size;i++)
    {
        
        
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[size-1-i]= temp;
        

    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int size,k;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("How many times you have to rotate the array: ");
    scanf("%d",&k);

    rotate_array(size,k,arr);
}