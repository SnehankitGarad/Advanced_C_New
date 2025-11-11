#include<stdio.h>
int minOperations(int* nums, int numsSize, int k) 
{
    int sum =0;
    for(int i=0;i<numsSize;i++)
    {
        sum = sum+nums[i];

    }
    if(sum%k==0)
    {
        return 0;
    }
    else if(k>sum)
    {
        return sum;
    }
    else
    {
        int a = sum % k;
        
        return a;
    }
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
        scanf("%d",&arr[i]);
    }

    int k;
    printf("Enter the k :");
    scanf("%d",&k);

   int cala = minOperations(arr, size, k);
   printf("minimum operation: %d",cala);

}