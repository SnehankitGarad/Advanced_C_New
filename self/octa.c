#include <stdio.h>
int main()
{
	int n,balance;
printf("1.withdraw\n2.deposit\n3.check balance\n4.exit\n");
printf("enter the option: ");
scanf("%d",&n);
balance=1000;

if(n==1)
{
	printf("enter the amount: ");
	scanf("%d",&n);
if(n<=balance)

{
        if(n>=500){
		int note;
		int count=0;
		note=n/500;
		printf("500 x %d\n",note);
		count=0+note;
		balance=n%500;
	}
{
	printf("payment is successfull");
}}
        else {
	      printf("payment is unsuccessfull");
}
}
else {
	printf("invalid option");
}
if(n==2){
	printf("enter the amount: ");
	scanf("%d",&n);
	n=balance+n;
	printf("total amount: %d\n",n);


}
if(n==3){ 

	
	printf("total amount: %d",n);

}	



}
