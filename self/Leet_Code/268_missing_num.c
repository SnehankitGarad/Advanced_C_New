#include<stdio.h>
int missingNumber(int* arr, int Size) 
{
    int flag = 0;
    for(int i=0;i<Size;i++)
    {
        if(arr[i+1]-arr[i]>1)
        {
            printf("%d ",arr[i]+1);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("%d ", Size);
    }
}
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    
    missingNumber(arr, size) ;
}

