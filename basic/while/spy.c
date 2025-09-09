#include <stdio.h>
int main()
{
	int num; 
	int sum=0;
	int mul=1;
	scanf("%d",&num);

	while(num>0)
	{
		int rem=num%10;
		sum=sum+rem;
		mul=mul*rem;
		num=num/10;
	}
	if(sum==mul)
	{
		printf("it is spay");
	}
	else

	{
		printf("it is not spy");
	}
}
