#include <stdio.h>
int print(int* arr,int size)
{
    if(size == 0)
    {
        return 1;
    }
   print(arr,size-1);
   printf("%d ",arr[size -1]);
    
}
int main()
{
    int arr[] = {2,4,6,8,10,12};
    int size=6;
    print(arr,size);
}