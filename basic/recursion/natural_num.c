#include <stdio.h>
int natural_sum(int n)
{
	if(n>0)
	{
		return n+natural_sum(n-1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int num;
	scanf("%d",&num);

	int ret = natural_sum(num);
	printf("sum :%d\n",ret);
}
