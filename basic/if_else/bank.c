#include<stdio.h>
int main()
{
	int amount,note;
	int count = 0;
	printf("enter the amount : ");
	scanf("%d",&amount);
	
	if(amount>=500)
	{ note=amount/500;
		printf("500 x %d\n",note);
amount=amount%500;
	}
	if (amount>=200);
	{ note=amount/200;
		printf("200 x %d\n",note);
		amount=amount%200;}
	 
	
	if (amount>=100);
	{ note=amount/100;
		printf("100 x %d\n",note);
		amount=amount%100;}
	
		
		
       if (amount>=50);
	{ note=amount/500;
		printf("50 x %d\n",note);
		amount=amount%50;}
	
	if (amount>=10)
	{
		note=amount/10;
		printf("10 x %d\n",note);
		amount=amount%10;}
	
	
	
	
	}

	

