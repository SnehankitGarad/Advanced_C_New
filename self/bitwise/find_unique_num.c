#include<stdio.h>
int main()
{
    int arr[]={6,1,3,3,3,6,6};
    int size= sizeof(arr)/sizeof(arr[0]);

    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum ^= arr[i];
    }

    printf("Unique Number is: %d\n",sum);
}