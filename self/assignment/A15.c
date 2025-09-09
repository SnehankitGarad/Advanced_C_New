//A15 - WAP to remove duplicate elements in a given array?
#include <stdio.h>

void fun(int arr1[], int size, int arr2[], int *new_size)
{
    *new_size=0;
    for(int i=0;i<size;i++)
    {
        int flag=0;
        for(int j=0;j<*new_size;j++)
        {
            if(arr1[i]==arr2[j])
            {
                flag =1;
                break;
            }
        }
        if(flag == 0)
        {
            arr2[*new_size]=arr1[i];
            (*new_size)++;
        }
    }
    printf("After removing duplicates: ");
    for(int i=0;i<*new_size;i++)
    {
        printf("%d ",arr2[i]);
    }
}

int main()
{
    int size;
    scanf("%d",&size);
    int arr1[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int new_size = 0;
    int arr2[new_size];
     
    fun(arr1,size,arr2,&new_size);

    
}