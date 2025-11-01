#include<stdio.h>
#include<stdlib.h>
int singlenum(int* arr,int size)
{
    int count;
    
    for(int i=0;i<size;i++)
    {
        count=0;
        for(int j=0;j<size;j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                //break;
            }
        }
        if(count == 1)
        {
            printf("Single Num is: ");
            printf("%d ",arr[i]);
        }
    
        
    }
}
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements of array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    singlenum(arr,size);
}