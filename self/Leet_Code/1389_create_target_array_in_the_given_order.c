#include<stdio.h>
#include<stdlib.h>
int* createTargetArray(int* nums, int numsSize, int* index, int indexSize, int* returnSize) 
{
    int* result = (int*)malloc(numsSize*sizeof(int));
    for(int i =0;i<numsSize;i++)
    {
        result[i] = -1;
    }
    for(int i=0;i<numsSize;i++)
    {
        if(result[index[i]] == -1)
        {
            result[index[i]] = nums[i];
        }
        else
        {
            
            for(int j = i ;j > index[i];j--)
            {
                result[j] = result[j-1];
            }
            result[index[i]] = nums[i];
        }
    }
    *returnSize = numsSize;
    return result;
    
}
int main()
{
    int size,size1;
    printf("Enter the size of nums: ");
    scanf("%d",&size);

    int nums[size];
    printf("Enter the elements of nums: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&nums[i]);
    }

    printf("Enter the size of index: ");
    scanf("%d",&size1);

    int index[size1];
    printf("Enter the elemts of index: ");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&index[i]);
    }

    int* brr = createTargetArray( nums, size, index, size1, &size);

    printf("Enter the elements are: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",brr[i]);
    }
    printf("\n");
}