#include <stdio.h>
int main()
{
	int num;
	int rem;
	int result;
	int sum=0;

	scanf("%d",&num);

	while(num != 0)
	{
		rem = num%10;
		if(rem ==0)
		{
			rem != rem;
		}
		result = result* 10+ rem;
		num=num/10;
	}
	while(result != 0)
	{
		int rem1=result %10;
		sum = sum*10+rem1;
		result = result /10;
	}
	printf("%d\n",result);
}
