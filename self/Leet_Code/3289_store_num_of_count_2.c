
#include<stdio.h>
#include<stdlib.h>
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) 
{
    int count=0;
    int k=0;
    int *result = (int*) malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
        count =0;
        for(int j=0;j<numsSize;j++)
        {
    
            if(nums[i] == nums[j])
            {
                count++;
            }
        }
        if(count == 2)
        {
            int found = 0;                
            for(int x=0; x<k; x++)        
            {
                if(result[x] == nums[i])
                {
                    found = 1;
                    break;
                }
            }
            if(!found)                    
            {
                result[k] = nums[i];
                k++;
            }
        }
        

    }
    for(int i=0;i<k;i++)
    {
        
        for(int j=i+1;j<k;j++)
        {
            if(result[i]>result[j])
            {
                int temp = result[i];
                result[i] = result[j];
                result[j] = temp;
            }
        }
    }
    *returnSize = k;
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

    int* brr = getSneakyNumbers(arr, size, &size); 

    printf("Output is: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",brr[i]);
    }
    free(brr);
}