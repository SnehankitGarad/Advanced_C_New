#include <stdio.h>
#include <stdlib.h>
int *plusOne(int *digits, int digitsSize, int *returnSize)
{
        int carry = 1; 
        for (int i = digitsSize - 1; i >= 0; i--)
        {
            int sum = digits[i] + carry;
            digits[i] = sum % 10;
            carry = sum / 10;
        }


        if (carry)
        {
            int *result = (int *)malloc((digitsSize + 1) * sizeof(int));
            result[0] = 1;
            for (int i = 0; i < digitsSize; i++)
            {
                result[i + 1] = digits[i];
            }
            *returnSize = digitsSize + 1;
            return result;
        }

        
        int *result = (int *)malloc(digitsSize * sizeof(int));
        for (int i = 0; i < digitsSize; i++)
        {
            result[i] = digits[i];
        }
        *returnSize = digitsSize;
        return result;
    
}
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *brr = plusOne(arr, size, &size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", brr[i]);
    }
    free(brr);
}