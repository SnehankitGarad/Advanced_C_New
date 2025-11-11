#include<stdio.h>
#include<stdlib.h>
int* transformArray(int* nums, int numsSize, int* returnSize) 
{
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]%2==0)
        {
            nums[i] = 0;
        }
        else
        {
            nums[i] = 1;
        }
    }

    int* result = (int*) malloc (numsSize * sizeof(int*));

    for(int i=0;i<numsSize;i++)
    {
        result[i] = nums[i];
    }

    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(result[i] > result[j])
            {
                int temp = result[i];
                result[i] = result[j];
                result[j] = temp;
            }
        }
    }
    *returnSize = numsSize;
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

    int* brr = transformArray(arr,size,&size); 

    printf("Output is: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",brr[i]);
    }
    free(brr);
}