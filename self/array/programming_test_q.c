#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];

    int b;
    scanf("%d",&b);
    int arr1[b];


    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<b;i++)
    {
        scanf("%d",&arr1[i]);
    }

    for(int i=0;i<a;i++)
    {
        if(arr[i] > arr[i+1])
        {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    for(int i=0;i<a;i++)
    {
    printf("%d ",arr[i]);
    }

}