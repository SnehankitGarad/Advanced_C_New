#include<stdio.h>
int main()
{
    int size;
    printf("Enter the Size of Array: ");
    scanf("%d",&size);

    int arr[size];
    printf("enter the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<size/2;i++)
    {
        arr[i] = arr[i] + arr[size-i-1];
        arr[size-i-1] = arr[i] - arr[size-i-1];
        arr[i] = arr[i]-arr[size-i-1];
    }

    printf("Reversed array is: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}