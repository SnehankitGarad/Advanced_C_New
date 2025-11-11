#include<stdio.h>
int numIdenticalPairs(int* nums, int numsSize) 
{
    int count = 0;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(i<j)
            {
                if(nums[i] == nums[j])
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
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Elements of array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int res=numIdenticalPairs(arr,size);
    printf("Output is : %d\n",res);
}