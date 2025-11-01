#include<stdio.h>
int main()
{
	int num,i;
	scanf("%d",&num);
	int count0=0;
	int count1=0;

	for( i=31;i>=0;i--)
	{
		int res = num & (1 << i);
		if(res==0)
		{
			printf("0");
			count0++;
		}
		else
		{
			printf("1");
			count1++;
		}
	}
	printf("\n");

	printf("%d\n",count0);
	printf("%d\n",count1);
	if((count1&1)==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}

}
