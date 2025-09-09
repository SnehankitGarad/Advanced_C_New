#include<stdio.h>
int main()
{
	int num;
	printf(":::WELCOME TO THE 22E BANK:::\n");
	printf("1.withdraw\n2.deposit\n3.check balance\n4.exit\n");
	printf("select the option :");
	scanf("%d",&num);
	
	int amount,balance=2000;

	if (num==1)
	{
		printf("enter the amount :");
		scanf("%d",&amount);
		
		if(amount<=balance)
		{
			printf("withdraw successful \n");
			balance = balance - amount;
			printf("show balance : %d\n",balance);
			 }
		else {
			printf("insufficient balance: \n");



			
			
		
				
		}
	}
}
