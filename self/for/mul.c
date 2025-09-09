#include <stdio.h>
int main()
{
	int n,a;
	scanf("%d",&n);
	int var=0;
//printf("which table u want: ");
//scanf("%d",&a);
	for(int i=1;i<=n;i++)
	{
	for(int j=1;j<=n;j++)
	{
		printf("%d*%d=%d  ",j,i,i*j);
	}
	printf("\n");
	}
}
