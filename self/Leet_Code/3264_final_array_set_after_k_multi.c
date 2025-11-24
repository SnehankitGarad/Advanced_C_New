#include<stdio.h>
#include<stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getFinalState(int* nums, int numsSize, int k, int multiplier, int* returnSize) 
{
    
    int* result = (int*)malloc(numsSize*sizeof(int));

    for(int i=0;i<numsSize;i++)
    {
        result[i] = nums[i];
    } 

    for(int i=0;i<k;i++)
    {   
        int min = result[0];
        int minind =0;

        for(int j =0;j<numsSize;j++)
        {
           if(min > result[j])
            {  
                min = result[j];
                minind = j;
            }
        }
        result[minind]= result[minind] * multiplier;
    }
    *returnSize = numsSize;
    return result;
}
int main()
{
    int size,k,multi;
    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Array elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter k: ");
    scanf("%d",&k);

    printf("Enter multi: ");
    scanf("%d",&multi);

    int* brr =getFinalState(arr, size,  k, multi, &size) ;
    for(int i=0;i<size;i++)
    {
        printf("%d ",brr[i]);
    }
    free(brr);
}