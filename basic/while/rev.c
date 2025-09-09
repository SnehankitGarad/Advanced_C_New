#include <stdio.h>
int main()
{
	int num;
	printf("enter the n umber:");
	scanf("%d",&num);
int orig=num;
	int var=0;
	while(num>0)
	{
		int rem=num%10;
		var=var*10+rem;
		num=num/10;

		
		
	}
	if(var==orig)
	{
	printf("it is palindram");
	}
	else
	{
		printf("it id not palimdram");
	}
}

