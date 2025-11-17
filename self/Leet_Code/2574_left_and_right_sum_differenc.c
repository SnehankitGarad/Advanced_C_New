#include<stdio.h>
#include<stdlib.h>

int* leftRightDifference(int* nums, int numsSize, int* returnSize) 
{
    int* leftsum = (int*)malloc(numsSize*sizeof(int));
    int* rightsum = (int*)malloc(numsSize*sizeof(int));
    int* result = (int*)malloc(numsSize*sizeof(int));

    int sum = 0;
    for(int i=0;i<numsSize;i++)
    {
        leftsum[i] = sum;
        sum = sum + nums[i];
    }   

    sum =0;
    for(int i=numsSize-1;i>=0;i--)
    {
        rightsum[i] = sum;
        sum = sum + nums[i];
    } 

    for(int i=0;i<numsSize;i++)
    {
        nums[i] =  abs(leftsum[i] - rightsum[i]);
    }

    *returnSize = numsSize;
    return nums;
}
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array values: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int* brr = leftRightDifference(arr, size, &size);
    for(int i=0;i<size;i++)
    {
        printf("%d",brr[i]);
    } 
}