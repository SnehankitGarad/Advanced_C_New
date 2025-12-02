#include<stdio.h>
int minElement(int* nums, int numsSize) 
{
   int i=0;
    int res[numsSize];
   while(i != numsSize)
   {
    int sum =0;
    while(nums[i] != 0)
    {
        int n  = nums[i]%10;
        sum = sum + n;
        nums[i] = nums[i] / 10;
    }
    res[i] = sum;
    i++;
   }
   int min = res[0];
   for(int i=0;i<numsSize;i++)
   {
    if(res[i] < min)
    {
        min = res[i];
    }
   }

return min;
}
int main()
{
    int size;
    printf("Enter the elements: ");
    scanf("%d",&size);

    int nums[size];
    printf("Enter the Array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&nums[i]);
    }
    int res = minElement(nums,size);
    printf("Min ele is: %d\n",res); 
}