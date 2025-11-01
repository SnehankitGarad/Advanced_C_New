#include<stdio.h>
#include<stdbool.h>
bool containsDuplicate(int* nums, int numsSize)
{
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i] == nums[j])
            {
               return true;
                
            }
        }
        return false;
    }
    // return false;
}
int main()
{
    int nums[] ={1,2,4,9};
    int size = sizeof(nums)/sizeof(nums[0]);
    

    
    if(containsDuplicate(nums,size))
    {
        printf("Duplicate found\n");
    }
    else
    {
        printf("Dupilicate not found\n");
    }
  
}
