#include<stdio.h>
#include<stdlib.h>
int compare(const void* p, const void* q)
{
    return *(int*)p > *(int*)q;
}
int main()
{
    int arr[]={7,5,2,9,8};
    
    qsort(arr,5,sizeof(int),compare);
    printf("Elements are: ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
}