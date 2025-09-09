#include <stdio.h>
void sum();     


void main() 
{
	sum(4,8);
}

	
void sum(){
	 int n;
	float prime=0;
	
	printf("enter  numbers");
	scanf("%d ",&n);
	prime = 6*n+1;
	printf("prime = %f\n",prime);
}

	
