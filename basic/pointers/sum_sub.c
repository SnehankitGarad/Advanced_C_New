#include <stdio.h>
void add_sub(int a, int b, int* sum,int*sub)
{
	*sum=a+b;
	*sub=a-b;
}
int main()
{
	int a,b,sum,sub;
	scanf("%d %d",&a,&b);
	add_sub(a,b,&sum,&sub);
	printf("Addition: %d\n",sum);
	printf("Subtraction: %d\n",sub);
}

