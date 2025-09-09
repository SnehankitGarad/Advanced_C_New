//A13 - WAP to find 3rd largest element in an array?
#include <stdio.h>

int third_largest(int arr[], int size, int* s_max,int* max,int* t_max)
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
    *t_max=0;

    for(int i=0;i<size;i++)
    {
        if(arr[i]<*max && arr[i]<*s_max && arr[i]>*t_max)
            {
             *t_max=arr[i];
            }
            
        
    }
    return *t_max;

}
    

int main()
{
    int size, ret;
    
    
   // printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int max;
    int s_max;
    int t_max;
    ret = third_largest(arr, size,&s_max,&max,&t_max);
    
    printf("Third largest element of the array is %d\n", ret);
}