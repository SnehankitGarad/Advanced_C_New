#include <stdio.h>
int main()
{
	int arr[7]={1,2,3,4,5,6,7};
	int k=3;
	int n=7;

	k=k%n;

	for(int i=0;i<(7/2);i++)
	{
		int temp=arr[i];
		arr[i]=arr[7-i-1];
		arr[7-i-1]=temp;
	}
	for(int i=0;i<7;i++)
	{
		printf("%d ",arr[i]);
	}

	printf("\n");
	for(int i=0;i<k/2;i++)
	{
		int temp=arr[i];
		arr[i]=arr[k-i-1];
		arr[k-i-1]=temp;
	}
	for(int i=0;i<7;i++)
	{
		printf("%d ",arr[i]);
	}

	printf("\n");

	for(int i=k;i<5;i++)
	{
		int temp=arr[i];
		arr[i]=arr[7-i+2];
		arr[7-i+2]=temp;
	}
	for(int i=0;i<7;i++)
	{
		printf("%d ",arr[i]);
	}
}
