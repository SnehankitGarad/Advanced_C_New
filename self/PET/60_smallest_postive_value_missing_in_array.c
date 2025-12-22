#include<stdio.h>
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
    for(int i=0;i<size;i++)
    {
        if(arr[i] <= 0 || arr[i] > size)
        {
            arr[i] = size+1;
        }
    }

    for(int i=0;i<size;i++)
    {
        int val = arr[i];
        if(val < 0)
        {
            val = -val;
        }
        if(val >= 1 && val <= size)
        {
            if(arr[val-1] > 0)
            {
                arr[val-1] = -arr[val-1];
            }
        }

    }

    for(int i=0;i<size;i++)
    {
        if(arr[i] > 0)
        {
            printf("Smallest positive num %d\n",i+1);
            return 0;
        }
    }

    printf("Smallest positive num %d\n",size+1);
    return 0;
}