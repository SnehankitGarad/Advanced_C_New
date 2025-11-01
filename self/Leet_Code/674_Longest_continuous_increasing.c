#include<stdio.h>
int findLengthOfLCIS(int* arr, int size)
{
    int count=0;
    int k=0;
    int max ;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            count++;
            if(count>k)
            {
                k=count;
            }
        }
        else
        {
            count=0;
            max=0;
        }
    }
    printf("%d\n",k);
}
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements of array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    findLengthOfLCIS(arr,size);
}