#include <stdio.h>

void print_sort(int arr[], int size)
{
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("%d ", min);
    for (int i = 0; i < size - 1; i++)
    {
        int s_min = max;
        for (int j = 0; j < size; j++)
        {
            if (arr[j] > min && arr[j] < s_min)
            {
                s_min = arr[j];
            }
        }
        printf("%d ", s_min);
        min = s_min;
    }
    return;
}

int main()
{
    int size, iter;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the %d elements\n", size);
    for (iter = 0; iter < size; iter++)
    {
        scanf("%d", &arr[iter]);
    }

    printf("After sorting: ");
    print_sort(arr, size);

    printf("\n");

    printf("Original array values ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}