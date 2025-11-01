#include<stdio.h>
#include<stdlib.h>
int* filter_cle(int* arr,int* size,int *new_size)
{
    int* og;
    for(int i=0;i<size;i++)
    {
        if(magic(arr[i])==1)
        {
            (*new_size)++;
            if(*new_size==1)
            {
                og = malloc;
            }
        }
    }
}
int main()
{
    int size,new_size=0;
    printf("Enter the size: ");
    scanf("%d",&size);

    int* arr=malloc(sizeof(int)*size);
    printf("Enter the array elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *p=filter_cle(arr,size,new_size);
}