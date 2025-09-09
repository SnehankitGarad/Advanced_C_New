#include<stdio.h>
int main()
{
	int arr[5]={1,1,1,2,2};

	for(int i=0;i<5;i++)
	{
		int count=0;
		for(int j=0;j<5;j++)
		{
			if(j<i)
			{
				if(arr[i]==arr[j])
				{
					break;
				}
			}
			else
			{
				if(arr[i]==arr[j])
					count++;
			}
		}
		//if(count>0)
		{

		printf("%d --> %d\n",arr[i],count);
		}
	}
}
