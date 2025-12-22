#include<stdio.h>
int main()
{
    int size;
    printf("Enter the Size of Array: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the Array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int sum = 0;

    printf("Odd Number are: ");
    for(int i=0;i<size;i++)
    {
        if(arr[i] % 2 ==1)
        {
            printf("%d ",arr[i]);
            sum += arr[i];
        }
    }
    printf("\n");

    printf("Sum of odd num is: %d\n",sum);
}