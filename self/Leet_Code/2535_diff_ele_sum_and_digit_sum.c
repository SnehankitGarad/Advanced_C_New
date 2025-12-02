#include<stdio.h>
#include<stdlib.h>
int differenceOfSum(int* nums, int numsSize) 
{
    int sum = 0;
    int sum1=0;
    for(int i=0;i<numsSize;i++)
    {
        sum += nums[i];
        while(nums[i] != 0)
        {
            int n = nums[i]%10;
            sum1+= n;
            nums[i] = nums[i]/10;
        }
    }
    return abs(sum1-sum);
}
int main()
{
    int size;
    printf("Enter the Size: ");

    int nums[size];
    printf("Enter the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&nums[i]);
    }

    int res = differenceOfSum( nums, size);
    printf("%d\n",res);
}