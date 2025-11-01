#include <stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int pos;
	scanf("%d",&pos);

	int res = num ^ (1<< pos);
	printf("%d",res);
}
