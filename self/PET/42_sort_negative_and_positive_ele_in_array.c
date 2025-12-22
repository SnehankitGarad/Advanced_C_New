#include<stdio.h>
int main()
{
    int size;
    printf("Enter the Size of arraay: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int k = 0;
    int n = 0;
    int pos[size];
    int neg[size];

    for(int i=0;i<size;i++)
    {
        if(arr[i] >= 0)
        {
            pos[k++] = arr[i];
        }
        else
        {
            neg[n++] = arr[i];
        }
    }

    for(int i=0;i<n;i++)
    {
        
        arr[i] = neg[i];
    }
    
    for(int i=0;i<n;i++)
    {
        
        arr[n+i] = pos[i];
    }

    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}