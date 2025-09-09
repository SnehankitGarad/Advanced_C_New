#include<stdio.h>
int main()
{
	int num=15;
	int* ptr = &num;
	printf("%p\n",&num);  //it will give the address of num.
	printf("%p\n",ptr);   //it will give adress which is stored in it.
	return 0;
}
