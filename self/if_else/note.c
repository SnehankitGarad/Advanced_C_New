#include <stdio.h>
int main()
{
	 int amount,balance,note;
	 int count=0;
	 printf("enter the amount:");
	 scanf("%d",&amount);
	 
	 
	 if(amount>=500)
		 {note=amount/500;
			 printf("500 x %d",note);
			 count=count+note;
			 amount=amount%500;
			 
		 }
		 else {
			 printf("insufficent balance");
		 }
	 
}

