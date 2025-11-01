#include<stdio.h>
int findMaxConsecutiveOnes(int* arr, int size)
{
    int k=0;int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i] == 1)
        {
            count++;
            if(count>k)
            {
                k=count;
            }
        }
        else
        {
            count =0;
        }
    }
    printf("Consecutive ones are: %d\n",k);
    
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

    findMaxConsecutiveOnes(arr,size);
}