
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
printf("Factor of %d:",a);
	int count;
	for (int i=1;i<=a;i++)
		if(a%i == 0)
		{
		printf("%d ",i);
	count=0+i;
		}
printf("Number of factor %d\n",count);
}
