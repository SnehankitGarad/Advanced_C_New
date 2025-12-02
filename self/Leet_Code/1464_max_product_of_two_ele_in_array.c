#include<stdio.h>
int maxProduct(int* nums, int numsSize) 
{
   int sum = 0;
   int max = (nums[0]-1)*(nums[1]-1);;
   
   for(int i=0;i<numsSize;i++)
   {
        for(int j=i+1;j<numsSize;j++)
        {
            sum = (nums[i]-1)*(nums[j]-1);
            if(sum > max)
            {
                max = sum;
            }

        }
   }
   return max;

}
int main()
{
    int size;
    printf("Enter the Size: ");
    scanf("%d",&size);

    int nums[size];
    printf("Enter the Array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&nums[i]);
    }
    int result = maxProduct(nums,size);
    printf("Output is: %d",result); 
}