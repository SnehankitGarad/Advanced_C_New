#include <stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
int var=0;
int mul=0;
int power=0;
 

	while(num>0)
	{
		
		
		mul=2*power*num%10;
		var = var+mul;
		num=num/10;
		power++;
	
	printf("%d",var);
	}
}


