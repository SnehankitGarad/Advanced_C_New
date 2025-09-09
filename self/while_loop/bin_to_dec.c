#include <stdio.h>
int main()
{
	int mul=1;
	int sum=0;
	int num;
	int power=0;
	
	scanf("%d",&num);
int temp=num;
	while(num>0)
	 {  int rem = num%10;
		mul=rem*2*power;
		
		sum=sum+mul;
		num=num/10;
		power++;
		printf("%d",sum);
	}
	
}
