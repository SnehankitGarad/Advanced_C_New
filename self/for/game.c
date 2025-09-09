#include <stdio.h>
int main()
{
	int a,b;
	printf("\t\t\t:::Welcome TO THIS Platform:::\n");
	printf("If you want to see guidliness (1.yes/2.no): ");
	scanf("%d",&a);

	if(a==1)
	{
		printf("1. You will get the 2 chances.\n2. You will have Hints\n");
	}

	for(int i=1;i<=2;i++)
	{		
	scanf("%d",&b);

		
		if(b>=1 && b!=32 && b<=50)
		{
			 if(b>=1 && b<=10)
			 {printf("you r far way\n");

			 }
			 else if(b>=11 && b<=31){
			 printf("far way\n");

			 }
			 else if (b>=33 && b<=50)
			 {printf("way\n");
			 }
			 
		}
		else 
		{
			if(b==32){

			printf("congrats\n");
			break;
			}

		}
	}

	//printf("congrats\n");		
		
}
