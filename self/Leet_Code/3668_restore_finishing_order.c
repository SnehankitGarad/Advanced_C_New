#include<stdio.h>
#include<stdlib.h>

int* recoverOrder(int* order, int orderSize, int* friends, int friendsSize, int* returnSize)
{
    int* result = (int*) malloc(friendsSize * sizeof(int*));
    int k=0;
    for(int i=0;i<orderSize;i++)
    {
        for(int j=0;j<friendsSize;j++)
        {
            if(order[i] == friends[j])
            {
                result[k] = order[i];
                k++;
            }
        }
    }

    *returnSize = friendsSize;
    return result;
}
int main()
{
    int size;
    printf("Enter size of order: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements of order: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int size1;
    printf("Enter the size of friends: ");
    scanf("%d",&size1);

    int brr[size1];
    printf("Enter the elements of friends: ");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&brr[i]);
    }

    int *car = recoverOrder(arr, size, brr, size1, &size);

    printf("Output is: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",car[i]);
    }
    free(car);
}