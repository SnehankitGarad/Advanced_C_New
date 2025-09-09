#include <stdio.h>
int main()
{
	int marks[10]={36,65,78,20,95,10,31,54,60,100};

	for(int i=0;i<10;i++)
	{
		if(marks[i]<35)
		{
			printf("%d ",i);
		}
	}
}
