#include<stdio.h>
#include<stdlib.h>
int* finalPrices(int* prices, int pricesSize, int* returnSize) 
{
    int* result = (int*)malloc(pricesSize*sizeof(int));
    for(int i=0;i<pricesSize;i++)
    {
        int flag =0;
        for(int j=i+1;j<pricesSize;j++)
        {
            if(prices[i] >= prices[j])
            {
                flag =1;
                result[i] = prices[i]-prices[j];
                break;
            }            
        }
        if(flag == 0)
        {
            result[i] = prices[i];
        }
    }  
    *returnSize = pricesSize;
    return result;
}
int main()
{
    int size;
    printf("Enter the Size: ");
    scanf("%d",&size);

    int prices[size];
    printf("Enter the Elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&prices[i]);
    }
    int returnsize;
    int* result = finalPrices(prices, size, &returnsize);
    printf("Output is: ");
    for(int i=0;i<returnsize;i++)
    {
        printf("%d ",result[i]);
    }
    printf("\n");
    free(result);
}