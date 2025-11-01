#include<stdio.h>
// int threeSumClosest(int* nums, int numsSize, int target)
// {
    
   
// }
int main()
{
    int nums[] ={-1,2,1,-4};
    int size = sizeof(nums)/sizeof(nums[0]);
    int target;
    printf("Enter the Target: ");
    scanf("%d",&target);

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(nums[j]>nums[j+1])
            {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] =temp;

            }
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",nums[i]);
    }


   
  

}