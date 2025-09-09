#include <stdio.h>
int main()
{
int a,b;
char ch;
printf("enter two numbers:");
scanf("%d%d",&a,&b);

if (a>='0' && a<='9')
{
	printf("sum of %d and %d is:%c\n",a,b,a+b);
}
else if (a>='0' && a<='9')
{
	printf("sum of %d and %d is:%c\n",a,b,a-b);
}
}
