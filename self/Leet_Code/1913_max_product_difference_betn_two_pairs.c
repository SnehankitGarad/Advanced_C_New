#include<stdio.h>
int maxProductDifference(int* nums, int numsSize)
{
    int min = 10000;
    int max = -1;
    int s_max=-1;
    int s_min=10000;

    for(int i=0;i<numsSize;i++)
    {
        if(nums[i] > max)
        {
            s_max = max;
            max = nums[i];
        }
        else if(nums[i] > s_max)
        {
            s_max = nums[i];
        }
    }
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i] < min)
        {
            s_min = min;
            min = nums[i]; 
        }
        else if(nums[i] < s_min)
        {
            s_min = nums[i];
        }
    }
   
    int cr = s_max * max;
    int ms = s_min * min;
    
    return (cr-ms); 
}
int main()
{
    int numsSize;
    printf("Enter the Size: ");
    scanf("%d",&numsSize);

    int nums[numsSize];
    printf("Enter the Array: ");
    for(int i=0;i<numsSize;i++)
    {
        scanf("%d",&nums[i]);
    }

    int result = maxProductDifference(nums,  numsSize);

    printf("Output is: %d",result);
}