#include<stdio.h>
int max(int n1,int n2)
{

	// return n1>n2; --> another way to get output
	
     if(n1>n2)
     
	     return 1;
     
     else

	     return 0;
}
int main()
{
	int n1,n2;
	
	scanf("%d %d",&n1,&n2);

	if(int max(n1,n2))
	{
		printf("%d id greater\n",n1);
	}
	else
	{
		printf("%d is greater\n",n2);
	}
}
