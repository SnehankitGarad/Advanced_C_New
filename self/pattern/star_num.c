#include <stdio.h>
int main()
{
	int num;
	scanf("%d",&num);

	for(int i=num;i>=1;i--)
	{
		for(int j=num;j>=i;j--)
		{
			printf("%d ",j);
		}
		for(int k=(i-1);k>=1;k--)
		{
			printf("* ");
		}
		printf("\n");
	}
}
