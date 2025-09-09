#include <stdio.h>
int main()
{
	char a;
	printf("enter the character: ");
	scanf("%c",&a);
	if (a>='A' && a<='Z'){
		printf("uppercase \n");
	}
	else if(a>='a' && a<='z')
	{
		printf("lowercase \n");

	}
	else if(a>='0'&& a<='9')
	{
		printf(" character is digit \n");
	}
	else
	{
		printf("special char \n");
	}
}
