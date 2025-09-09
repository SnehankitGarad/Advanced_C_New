#include <stdio.h>
int main()
{
	int a,n=0;
	
	scanf("%d",&a);
n=0;
	for(int i=1;i<=a;i++){
		if(a%i==0){
			n=n+i;

	}
	}
	printf("factor are: %d",n);
	
	
}


