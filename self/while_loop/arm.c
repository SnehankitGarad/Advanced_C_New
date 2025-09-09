#include <stdio.h>
int main()
{
	int num;
	printf("enter the number: ");
	scanf("%d",&num);
	int var=0;
	int sum=0;
	int temp = num;

	while(num>0)
	{
		int rem=num%10;
		var=var*10+rem;
		sum=sum+rem;
		num=num/10;
	}
	if (temp==sum)
	{
		printf("number is armstrong\n");
	}
	else
	{
		printf("not a armstrong");
	}
}
