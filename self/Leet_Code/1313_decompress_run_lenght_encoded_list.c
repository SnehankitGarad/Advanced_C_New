#include<stdio.h>
#include<stdlib.h>

int* decompressRLElist(int* nums, int numsSize, int* returnSize) 
{
    int count =0;
    int k=0;
    for(int i=0;i<numsSize;i+=2)
    {
        count = count + nums[i];
    }
    
    int* result = (int*)malloc(count*sizeof(int));
    
    for(int i=0;i<numsSize;i+=2)
    {
        int feq = nums[i];
        int val = nums[i+1];
        for(int j=0;j<feq;j++)
        {
            result[k++] = val;
        }

    }
    *returnSize = count;
    return result;
}
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int* brr = decompressRLElist(arr, size, &size);
    printf("Encoded List: ");
    for(int i=0;i<size;i++)
    {
        printf("%d",brr[i]);
    } 
}