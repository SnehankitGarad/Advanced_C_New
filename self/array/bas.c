#include <stdio.h>
int main()
{
	int arr[5];
	
	for(int i=0;i<5;i++)
	{

	printf("enter the number %d:\n",i);
	scanf("%d",&arr[i]);
	}

	for(int i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}printf("\n");

	for(int i=4;i>=0;i--)
	{
		printf("%d ",arr[i]);}
			
}

