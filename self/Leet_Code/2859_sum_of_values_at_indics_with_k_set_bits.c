#include<stdio.h>
int sumIndicesWithKSetBits(int* nums, int numsSize, int k) 
{
    int count;
    int sum=0;
    for(int i=0;i<numsSize;i++)
    {
        count=0;
        for(int j=0;j<31;j++)
        {
            if(i & (1 << j))
            {
              count++;
            }
        }
        if(count == k)
        {
            sum +=nums[i];
        }
    }
    return sum;
}
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);

    int nums[size];
    printf("Enter the Array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&nums[i]);
    }
    int k;
    printf("Enter the k: ");
    scanf("%d",&k);
    int res = sumIndicesWithKSetBits(nums, size,k);
    printf("%d\n",res);
}