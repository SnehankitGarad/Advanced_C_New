#include<stdio.h>
int maximumProduct(int* arr, int size)
{
    int min=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    int mul=min;
    int multi=0;
    for(int i=0;i<size-2;i++)
    {
        if(((multi=arr[i]*arr[i+1]*arr[i+2])>mul)>0)
        {
            mul=multi;
        }
        else if((multi=arr[i]*arr[i+1]*arr[i+2])<0)
        {
           mul=multi;
        }
    }
    return mul;
    
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
    int total=maximumProduct(arr,size);
    printf("Maximum product is: %d\n",total);
    
}