#include<stdio.h>
#include<stdlib.h>
int* shuffle(int* nums, int numsSize, int n, int* returnSize)
{
    int k=0;
    int* brr=(int*)malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize/2;i++)
    {
        brr[k++] = nums[i];
        brr[k++] = nums[n+i];
    }
    *returnSize=k;
    return brr;
}
int main()
{
    int size,n;
    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements of array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Where u want to shuffal: ");
    scanf("%d",&n);

    int* krr= shuffle(arr, size,  n, &size);
    printf("Output is: ");
    for(int i=0;i<size;i++)
    {
    printf("%d ",krr[i]);
    }
}