#include <stdio.h>
int main()
{
	int a;
	printf("age:");
	scanf("%d",&a);

	for(int i=1;i<=a;i++)

	if(a>18)
		printf("u r enough to vote: %d\n",i);
	else 
		printf("u r under age\n");
}
