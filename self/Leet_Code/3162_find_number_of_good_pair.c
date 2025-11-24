#include<stdio.h>
int numberOfPairs(int* nums1, int nums1Size, int* nums2, int nums2Size, int k) 
{
    int count=0;
    for(int i=0;i<nums1Size;i++)
    {
        for(int j=0;j<nums2Size;j++)
        {
            if(nums1[i]%(nums2[j] * k)==0)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int size,k;
    printf("Enter the Size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the Array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int size2;
    printf("Enter the Size: ");
    scanf("%d",&size2);

    int nums2[size2];
    printf("Enter the Array: ");
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&nums2[i]);
    }

    int k;
    printf("Enter the target: ");
    scanf("%d",&k);

    int ret = numberOfPairs(arr, size,nums2, size2,  k);
    printf("Output: %d",k);
}