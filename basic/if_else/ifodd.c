#include<stdio.h>
int main()
{
	int num;
	printf("enter the amount : %d\n",num);
	scanf("%d",&num);
	 
	if(num>0)
	{ 
		if(num/2 == 0)
			printf("even number ");
		else 
			printf("odd number");
	}
	else
		printf("invaild num");
}
