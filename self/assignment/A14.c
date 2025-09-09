//A14 - WAP to find 2nd largest element in an array?
#include <stdio.h>

int sec_largest(int arr[], int size,int* s_max,int* max)
{
*max=arr[0];
for(int i=0;i<size;i++)
{
    if(arr[i]>*max)
    {
        *max=arr[i];
    }
}

*s_max=0;

    for(int i=0;i<size;i++)
    {
        if(arr[i]<*max && arr[i]>*s_max)
            {
             *s_max=arr[i];
            }
            
        
    }
    return *s_max;

}

int main()
{
    int size, ret;
    
    //Read size from the user
   // printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max;
    int s_max;
    ret = sec_largest(arr, size,&s_max,&max);
    
    printf("Second largest element of the array is %d\n", ret);
}