#include<stdio.h>
int arithmeticTriplets(int* nums, int numsSize, int diff) 
{
   int count = 0;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[j] - nums[i] == diff)
            {
                for(int k=j+1;k<numsSize;k++)
                {
                    if(nums[k] - nums[j] == diff)
                    {
                        count++;
                    }
                }
            }
        }
    } 
    return count;   
}
int main()
{
    int size,diff;
    printf("Enter the Size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the diff: ");
    scanf("%d",&diff);

    int res = arithmeticTriplets( arr,size,diff);
    printf("No. of Triplets are: %d\n",res);
}