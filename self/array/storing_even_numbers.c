#include <stdio.h>
int main()
{
	int arr[7]={3,2,4,66,45,234,543};
	int evennum[7];
	int k=0;

	for(int i=0;i<7;i++)
	{
		if(arr[i]%2==0)
		{
			evennum[k] = arr[i];
			k++;
		}
	}
	for(int i=0;i<k;i++)
	{
		printf("%d ",evennum[i]);

	}
}
