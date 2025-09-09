#include <stdio.h>
int main()
{
    int size,val;
    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements of array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element which has too be removed: ");
    scanf("%d",&val);
    int count = 0;

    for(int i=0;i<size;i++)
    {
        if(arr[i] != val)
        {
            printf("%d ",arr[i]);
            count++;
        }
    }
    printf("\n");
    printf("%d",count);
}