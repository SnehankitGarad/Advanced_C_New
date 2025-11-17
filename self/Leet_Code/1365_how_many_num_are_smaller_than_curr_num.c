#include<stdio.h>
#include<stdlib.h>

int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) 
{
    int* result = (int*)malloc(numsSize*sizeof(int));
    int count;
    for(int i=0;i<numsSize;i++)
    {
        count= 0;
        for(int j=0;j<numsSize;j++)
        {
            if(nums[i] > nums[j])
            {
                count++;
            }
        }
        result[i] = count;
    }
    *returnSize = numsSize;
    return result;
}
int main()
{
    int size;
    printf("Enter the Size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the values in array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }


    int* count = countPairs(arr, size, &size);
    
    for(int i=0;i<size;i++)
    {
    printf("Count: %d\n",count[i]);
    } 
}