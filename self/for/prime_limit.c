#include <stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int count;


	for(int i=1;i<=num;i++)
	{
		int count =0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
	}
	if(count == 2)
	{
	printf("%d ",count);
	}
}
