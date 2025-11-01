#include<stdio.h>
int main()
{
    int arr[4]={1,3,5,6};
    int num;
    int size=4;

    printf("Which num postion u have to check: ");
    scanf("%d",&num);
    int k=arr[0];
    for(int i=0;i<4;i++)
    {
    if(k<arr[i])
    {
        k=arr[i];
    }
    }

    for(int i=0;i<4;i++)
    {
      if(arr[i] == num || num < arr[i])
      {
        printf("%d\n",i);
        break;
      }
      else if(num > k)
      {
        printf("%d\n",size);
        break;
      }

    }
}