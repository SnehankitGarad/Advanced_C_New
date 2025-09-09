#include<stdio.h>
int main()
{
	int num =10;
	int* ptr=&num;
	printf("%d %d\n",num,*ptr);

	*ptr = 20;
	printf("%d %d\n",num,*ptr);

	*ptr = num - *ptr;
	printf("%d %d\n",num,*ptr);

	*ptr = *ptr +1;
	printf("%d %d\n",num,*ptr);


}
