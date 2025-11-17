#include<stdio.h>
int countPairs(int* nums, int numsSize, int target) 
{
    int count = 0;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j] < target)
            {
                count++;
            }
        }
    }
    return count;

}
int main()
{
    int size,target;
    printf("Enter the Size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the values in array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the target: ");
    scanf("%d",&target);

    int count = countPairs(arr, size,  target);
    printf("Count: %d\n",count); 
}