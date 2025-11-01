#include<stdio.h>
int numSubarrayBoundedMax(int* nums, int numsSize, int left, int right) 
{
    int check =0;
    int count =0;
    int checkleft=0;
    int countleft=0;

    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]<=right)
        {
            check++;
            count = check + count;
        }
        else
        {
            check = 0;
        }
    }
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]<=(left - 1))
        {
            checkleft++;
            countleft = checkleft + countleft;
        }
        else
        {
            checkleft = 0;
        }
    }
  

    return count - countleft;
    
}
int main()
{
    int size,left,right;
    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the left: ");
    scanf("%d",&left);

    printf("Enter the right: ");
    scanf("%d",&right);

    int res = numSubarrayBoundedMax(arr, size, left, right);
    printf("%d\n",res);
}