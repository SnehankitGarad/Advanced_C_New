#include<stdio.h>
int minOperations(int* nums, int numsSize, int k) 
{
    
    int count=0;
   for(int i=0;i<numsSize;i++)
   {
    if(nums[i] < k)
    {
        
        count++;
    }
   }
   return count;
}
int main()
{
    int numsSize,k;
    printf("Enter the size: ");
    scanf("%d",&numsSize);

    int arr[numsSize];
    printf("Enter the array: ");
    for(int i=0;i<numsSize;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the target: ");
    scanf("%d",&k);

    int ret =minOperations(arr,  numsSize,  k); 
    printf("Total operation to find the value: %d\n", ret);    
}