#include <stdio.h>
int main()
{
	int num = 0x12345678;
	int* p=&num;

	printf("%X\n",*p);

	short* a=(short*)&num;
	printf("%hx\n",*a);

	char *z=(char*)&num;
	printf("%c\n",*z);
}

