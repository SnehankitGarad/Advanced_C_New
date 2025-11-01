#include<stdio.h>
#include<stdbool.h>
bool containsDuplicate(int* nums, int numsSize,int k)
{
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i] == nums[j])
            {
               if((j-i)<=k)
               {
                return true;
               }
                
            }
        }
        //return false;
    }
     return false;
}
int main()
{
    int t;
    int nums[] ={1,2,3,1,2,3};
    int size = sizeof(nums)/sizeof(nums[0]);
    printf("Enter the target: ");
    scanf("%d",&t);
    

    
    if(containsDuplicate(nums,size,t))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
  
}
