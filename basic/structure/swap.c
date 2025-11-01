#include <stdio.h>
int main()
{
	short num = 0x1234;
	int r1 = ((num & 0x00FF)<<8);
	int r2 = ((num & 0xFF00)>>8);

	num = r1 ^ r2;	
	printf("%hx\n",num);
}

