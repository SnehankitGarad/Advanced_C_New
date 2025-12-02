#include<stdio.h>
#include<stdlib.h>
int countGoodTriplets(int* arr, int arrSize, int a, int b, int c)
{
    int count=0;
    for(int i=0;i<arrSize-2;i++)
    {
        
        for(int j=i+1;j<arrSize-1;j++)
        {
            for(int k=j+1;k<arrSize;k++)
            {
                if(abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c)
                {
                    count++;
                }
            }
            
        }
    }
    return count;

}
int main()
{
    int size,a,b,c;
    printf("Enter the Size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the values for a b c: ");
    scanf("%d %d %d",&a, &b ,&c);

    int res = countGoodTriplets(arr, size, a,  b,  c);
    printf("Total Pairs: %d\n",res);
}
