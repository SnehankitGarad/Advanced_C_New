#include<stdio.h>
int main()
{
    int i,j;
    int sum=0;
    int arr[6]={7,1,5,3,6,4};
    printf("Enter the Buying Day: ");
    scanf("%d",&i);

    printf("Enter the selling day: ");
    scanf("%d",&j);

    if(i<j && arr[i-1] < arr[j-1])
    {
        sum = arr[j-1] - arr[i-1];
        printf("%d\n",sum);
    }
    else if(arr[i-1] > arr[j-1])
    {
        printf("No trans happen, maxprofit = 0\n");
    }
    
    else
    {
        printf("How can you sell product before buying\n");
    }

}