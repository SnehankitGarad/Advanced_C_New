#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
int var=0;
	for(int i=1;i<=n;i++)
	{
		var=i*i*i;
	
	printf("%d and cube of the %d is: %d\n",i,i,var);
	}
}
