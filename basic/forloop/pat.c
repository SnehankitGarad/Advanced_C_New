#include <stdio.h>
int main()
{ int num;
	scanf("%d",&num);
	for (int i=1;i<=num;i++)
	{
		for(int j=num;j>=(2*i-1);j++)
		{
			printf("%d",j);
		}
	for (int k=1;k<=(num-i);i++)
	{
		printf("  ");
	}
	}

	
	
}

