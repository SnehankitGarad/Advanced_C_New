#include<stdio.h>
int main()
{ 
	char a,b;
	a();
	b();
	a();
}
a()
{
	printf("\n hello");
}
b()
{a();
}
