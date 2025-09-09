#include<stdio.h>
int prime(int n)
	
{

	
		for(int j=2;j<n;j++)
		{
			if(n%j==0)
			{
				return 1;
			}
			return 0;
		}
	
}
int main()
{
	int n ;
	scanf("%d",&n);

	for(int i=2;i<n;i++)
	{
	if(prime(i))
	{
		printf("prime");
	}
}
}


