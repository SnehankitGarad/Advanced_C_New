#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the size of first array: ");
    scanf("%d",&m);
    // int arr1[m];

    printf("Enter the size of second arrya: ");
    scanf("%d",&n);
    int arr2[n];
    int k=m+n;
    int arr1[k];
    printf("Enter the elements of 1st array: ");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("Enter the elements of 2st array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }


    for(int i=0;i<m;i++)
    {
        arr1[m+i] = arr2[i];
    }

    for(int i=0;i<k;i++)
    {
        for(int j=0;j<k;j++)
        {
            if(arr1[i]<arr1[j])
            {
                int temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }

    // for(int i = 0; i < k-1; i++)
    // {
    //     for(int j = 0; j < k-i-1;j++)
    //     {
    //         if(arr1[j] > arr1[j+1])
    //         {
    //             int temp = arr1[j];
    //             arr1[j] = arr1[j+1];
    //             arr1[j+1] = temp;
    //         }
    //     }
    // }
    for(int i=0;i<k;i++)
    {
        printf("%d ",arr1[i]);
    }
}