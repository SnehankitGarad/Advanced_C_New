#include <stdio.h>
int main()
{
    int size,target;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];

    printf("Enter the elements: ");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);

    printf("Enter the Target: ");
    scanf("%d",&target);

    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                printf("%d %d",i,j);
            }
        }
    }
}