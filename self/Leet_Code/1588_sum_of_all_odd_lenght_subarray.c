#include<stdio.h>

int sumOddLengthSubarrays(int* arr, int arrSize)
{
    int sum = 0;
    for(int i=0;i<arrSize;i++)
    {
        for(int j=1;j<=arrSize-i;j+=2)
        {
            for(int k=i;k<i+j;k++)
            {
                sum += arr[k];
            }
        }
    }
    return sum;
}
int main()
{
    int size;
    printf("Enter the Size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the Array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int result = sumOddLengthSubarrays(arr ,size);
    printf("Output is : %d\n",result);
}