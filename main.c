#include <stdio.h>
int main()
{
	static int num;
	static int flag = 1;
	if(flag == 1)
	{
		printf("Enter the num: ");
		scanf("%d",&num);
		flag=0;
	}
	static int i=1;
	if(i<=num)
	{
		printf("%d\n",i);
			i++;
		main();
	}
}
