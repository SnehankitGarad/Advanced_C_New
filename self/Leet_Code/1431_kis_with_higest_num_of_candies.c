#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) 
{
    bool* result = (bool*)malloc(candiesSize*sizeof(bool));
    int max = candies[0];
    for(int i=0;i<candiesSize;i++)
    {
        if(candies[i] > max)
        {
            max = candies[i];
        }
    }
    for(int i=0;i<candiesSize;i++)
    {
        if(candies[i]+extraCandies >= max)
        {
            result[i] = true;
        }
        else
        {
            result[i] = false;
        }
    }
    *returnSize = candiesSize;
    return result;
    
}
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);

    int extra;
    printf("Extra candies: ");
    scanf("%d",&extra);

    int arr[size];
    printf("Enter the elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    bool* ap = kidsWithCandies(arr, size,  extra, &size); 
    for(int i=0;i<size;i++)
    {
        if(ap[i] )
        {
            printf("True\n");
        }
        else
        {
            printf("False\n");
        }
    }
    free(ap);

}
