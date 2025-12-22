#include <stdio.h>
int main()
{
    int arr[100];
    int k, size, p, i, j;

    printf("Enter the Size: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter Number To Enter: ");
    scanf("%d", &k);

   
    for (i = 0; i < size; i++)
    {
        if (arr[i] > k)
        {
            break;
        }
    }

    
    for (j = size - 1; j >= i; j--)
    {
        arr[j + 1] = arr[j];
    }

   
    arr[i] = k;

    
    printf("Array elements after inserting : ");
    for (i = 0; i < size + 1; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
