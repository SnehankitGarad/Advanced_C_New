#include<stdio.h>
int main()
{
	int choice,a,n,b,s;

		printf("addition \n");
	
		printf("old-even \n");

		printf("printing n number \n");


		printf("enter the choice \n");
		scanf("%d",&choice);
		switch(choice)
		{  
case 1 : printf("enter two numbers");
			scanf("%d %d",&a,&b);
s=a+b;
	printf("\n sume of %d",s);
break;
  
case 2:  printf("enter the number");
	scanf("%d",&a);
	if("a/2==0"){
		printf("the number is even");
  	}
		else{
			printf("the number is old");
		}
	break;

case 3: printf("enter the number");
       scanf("%d",&n);
       for (b=1;b<=n;b++){
       printf("%d",b);
       }
       break;
			default:
       printf("invaild choise");
		}
}

