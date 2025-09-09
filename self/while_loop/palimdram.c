#include <stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int temp=num;
	int var=0;

	while(num>0)
	{
		int rem=num%10;
		var=var*10+rem;
		num=num/10;
	}
	if(temp==var)
	{
		printf("it is palimdram");
	}
	else
	{
		printf("it is not a palimdram");
	}
}

