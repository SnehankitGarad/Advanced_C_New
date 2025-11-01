#include<stdio.h>
#include<unistd.h>
int main()
{
	for(int i=0;i<=100;i++)
	{
		printf("Loading[");
	for(int j=0;j<=100;j++)
	{
		if(j<=i)
		
			printf("-");
		
		else
			printf(" ");
	}
	printf("] %d%%",i);
	printf("\r");
	fflush(stdout);
	usleep(50000);
	}
	printf("\nLoading completed\n");
}


