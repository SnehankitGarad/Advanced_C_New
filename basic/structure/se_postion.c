#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int pos;
	scanf("%d",&pos);

	int res=num & (1<<pos);

	if((res==0))
	{
		int ch=num | (1<<pos);
		printf("%d",ch);
	}
	else
		printf("num is 0");
}
