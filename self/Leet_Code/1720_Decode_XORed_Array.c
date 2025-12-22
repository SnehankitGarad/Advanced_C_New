#include<stdio.h>
#include<stdlib.h>
int* decode(int* encoded, int encodedSize, int first, int* returnSize) 
{
    int* result = (int*)malloc((encodedSize+1)*sizeof(int));
    result[0] = first;
    for(int i=1;i<=encodedSize;i++)
    {
        result[i] = result[i-1] ^ encoded[i-1];
    }
    *returnSize = encodedSize+1;
    return result;
}
int main()
{
    int size;
    printf("Enter the Size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int first;
    printf("Enter the first value: ");
    scanf("%d",&first);

    int* brr = decode(arr, size, first,  &size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",brr[i]);
    }
    free(brr);
}