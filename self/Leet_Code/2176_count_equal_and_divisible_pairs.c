#include<stdio.h>
int countPairs(int* nums, int numsSize, int k) 
{
    int count = 0;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i] == nums[j])
            {
                if((i*j)%k == 0)
                {
                    count++;
                }
            }
        }
    }
    return count;
}
int main()
{
    int size,k;
    printf("Enter the Size: ");
    scanf("%d",&size);

    printf("enter the target: ");
    scanf("%d",&k);

    int nums[size];
    printf("enter the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&nums[i]);
    }
    int result = countPairs( nums, size,  k);
    printf("Output is : %d\n",result); 
}