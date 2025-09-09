#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int mul=1;

	for(int i=n;i>=1;i--)
	{
		mul=mul*i;
		
	}
	printf("%d \n",mul);
}

