#include<stdio.h>
int binary(int n)
{
	if(n>0)
	{
		binary(n/2);
		printf("%d",n%2);
	}
}
int main()
{
	int num;
	scanf("%d",&num);

	int res=binary(num);
	printf("%d",res);
}
