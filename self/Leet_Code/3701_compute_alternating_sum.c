#include<stdio.h>
int alternatingSum(int* nums, int numsSize) 
{
    int sum=0;
    for(int i=0;i<numsSize;i++)
    {
        if(i%2==0)
        {
            sum = sum +nums[i];
        }
        else
        {
            sum = sum - nums[i];
        }
    }
    return sum;
    
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
    int r =alternatingSum(arr,size);
    printf("Output is: %d\n",r); 
}