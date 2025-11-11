#include<stdio.h>
int minimumOperations(int* nums, int numsSize) 
{
    int count=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i] %3 == 0)
        {
            continue;
        }
        else if((nums[i]-1) % 3 == 0)
        {
            count++;
        }
        else if((nums[i] +1) %3 == 0)
        {
            count++;
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
    printf("Enter the elements: ");
    for(int i=0;i<size;i++)
    {
        sacnf("%d",&arr[i]);
    }

    int res = minimumOperations(arr,size);
    printf("Output is: %d",res);
}