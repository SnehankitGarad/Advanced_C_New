#include<stdio.h>
int count (int num)
{
	if(num>0)
	{
		return 1+count(num/10);
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

	int res=count(num);
	printf("%d\n",res);
}
