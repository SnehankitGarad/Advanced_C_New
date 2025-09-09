#include <stdio.h>
int main()
{
	int num = 0X12345678;
	char* p=(char*)&num;

	if(*p == 0X78)
	{
		printf("Little endian\n");
	}
	else
	{
		printf("big endian\n");
	}
}
