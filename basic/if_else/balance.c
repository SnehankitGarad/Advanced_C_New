#include<stdio.h>
int main()
{ int balance = 1000;
	int amount;
	printf("enter the amount :");
	scanf("%d",&amount);

	if(amount<=balance){
		printf("withdraw succesfully : %d\n",amount);
	}
	balance=balance-amount;
	printf("avalible balance :%d\n",balance);
}
			
			
			
			
			
			
			
			
