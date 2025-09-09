#include<stdio.h>
int main()
{
	int a,b;

	printf("enter the lenght :");
	scanf("%d",&a);

	printf("enter the breath :");
	scanf("%d",&b);

	int peri=2*(a*b);
	printf("perimeter of rectangle : %d\n",peri);
}
