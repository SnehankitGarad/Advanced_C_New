#include<stdio.h>
#include<stdlib.h>

int* runningSum(int* nums, int numsSize, int* returnSize) 
{
    int *result = (int*)malloc(numsSize*sizeof(int));
    int sum = nums[0];
    result[0] = sum;
    for(int i=1;i<numsSize;i++)
    {
        sum = sum + nums[i];
        result[i]=sum;
    }
    *returnSize = numsSize;
    return result;
}
int main()
{
    int size;
    printf("Enter the szie: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);

    }

    int* brr= runningSum(arr,size, &size); 
    for(int i=0;i<size;i++)
    {
        printf("%d ",brr[i]);
    }
}