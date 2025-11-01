#include<stdio.h>
int third_max_num(int* arr,int size)
{
    int max = arr[0];
    int min=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else if(arr[i]<min)
        {
            min =arr[i];
        }
    }
    printf("First max: %d\n",max);
    int sec_max = min;
   if(size>=2)
   {
    for(int i=0;i<size;i++)
    {
        if(arr[i]<max && arr[i]>sec_max )
        {
           sec_max=arr[i];
        }
    }
    printf("Second max: %d\n",sec_max);
    }
    else{
        printf("Second element not found\n");
    }
    
    if(size>=3)
    {
    int third_max = min;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<sec_max && arr[i]>third_max && size >= 3)
        {
           third_max=arr[i];
        }
        
    }
    printf("Third  max: %d\n",third_max);
    }
    else{
        printf("no third element found\n");
    }
}
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    third_max_num(arr,size);
}