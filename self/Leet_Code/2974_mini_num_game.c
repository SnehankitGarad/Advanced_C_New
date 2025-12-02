#include<stdio.h>
#include<stdlib.h>

int* numberGame(int* nums, int numsSize, int* returnSize) 
{
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
    for(int i=0;i<numsSize;i+=2)
    {
        int emp = nums[i];
        nums[i] = nums[i+1];
        nums[i+1]=emp;
    }
    *returnSize = numsSize;
    return nums;
}
int main()
{
    int size;
    printf("Enter the Size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the Array: ");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);

    int returnSize;
    int* brr = numberGame(arr, size, &returnSize);

    printf("Output array Elements are: ");
    for(int i = 0; i < returnSize; i++)
        printf("%d ", brr[i]);

    printf("\n");
    
}
