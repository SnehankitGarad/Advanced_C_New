#include <stdio.h>
int main()
{
	int black=10;
	int blue=34;
	printf("%d%d\n",black,blue);
	int temp=black;
	black=blue;
	blue=temp;
	printf("%d%d\n",black,blue);
	return 0;
}
