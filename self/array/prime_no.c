#include <stdio.h>
int main()
{
	int arr[5]={2,56,34,23,12};
int count=0;
	for(int i=0;i<5;i++)
	{
		int count=0;
		for(int j=2;j<arr[i];j++)
		{
			if(arr[i]%j==0)
			{
				count++;
			}
		}
		if(count==0)
		{
			printf("%d ",arr[i]);
		}
	}
}
