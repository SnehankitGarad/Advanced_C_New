#include<stdio.h>
#include<stdlib.h>
int* getConcatenation(int* nums, int numsSize, int* returnSize)
{
    int* result = (int*) malloc((numsSize+numsSize) * sizeof(int*));
    for(int i=0;i<numsSize;i++)
    {
        result[i] = nums[i];
    }
    for(int i=0;i<numsSize;i++)
    {
        result[i+numsSize] = nums[i];
    }
    *returnSize = numsSize+numsSize;
    return result;
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

    int* brr = getConcatenation(arr, size, &size);

    printf("Output is : ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",brr[i]);
    }
}