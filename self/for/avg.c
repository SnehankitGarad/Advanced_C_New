#include <stdio.h>
int main()
{
	int n;
	float avg=0;
	int sum=0;
	scanf("%d",&n);

	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
	}
		printf("The sum of %d no :%d\n",n,sum);
	
		avg=((float)sum/n);
		printf("The Average is: %f",avg);
	
}

