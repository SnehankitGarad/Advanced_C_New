#include <stdio.h>
int factorial(int n)
{
	if (n>0)
	{
		return n* factorial(n-1);
	}
	else {
		return 1;
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	int ret= factorial(num);
	printf("%d\n",ret);
}

			
