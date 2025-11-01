#include<stdio.h>
#include<stdlib.h>

int* sortedSquares(int* nums, int numsSize, int* returnSize)
{
    for(int i=0;i<numsSize;i++)
    {
        nums[i] = nums[i] * nums[i];
    }

    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i] > nums[j])
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    int *result = (int*)malloc(numsSize * sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
        result[i] = nums[i];
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
    printf("Enter the elements of array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int *brr = sortedSquares(arr,size,&size);

    for(int i=0;i<size;i++)
    {
    printf("%d ",brr[i]);
    }
    free(brr);

}