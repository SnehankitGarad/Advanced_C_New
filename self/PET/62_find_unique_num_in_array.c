/* when there is only one unique number*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int res =0;
    for(int i=0;i<n;i++)
    {
        res = res ^ arr[i];
    }
    printf("Unique element in array is: %d\n",res);
}