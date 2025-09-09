#include <stdio.h>
int main()
{
	int n,m=1;
	scanf("%d",&n);

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=(n-i);j++)
		{
			printf("  ");
		}
		for(int k=1;k<=i;k++)
		{
			printf("* ");
		}
		for(int p=1;p<i;p++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("  ");
		}
		for(int k=1;k<=(n-i);k++)
		{
			printf("* ");
		}
		for(int p=1;p<=(n-i)-1;p++)
		{
			printf("* ");
		}
printf("\n");	}
}

		

