#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int sum=0;

	for(int i=1;i<=2*n;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
			sum=sum+i;
		}
		

		
	}
	printf("\n%d",sum);
}

