
#include <stdio.h>
int main()
{
	int size;
	printf("enter the size: ");
	scanf("%d",&size);
int sum=0;
float avg=0;
	int id[size];
	printf("Enter the array elements: ");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&id[i]);
	}
	printf("Array elements: ");
	for(int i=0;i<size;i++)
	{
		printf("%d ",id[i]);
	}
	for(int i=0;i<size;i++)
	{
		sum=sum+id[i];
	}
	avg = ((float)sum/size);
	printf("%f",avg);

	printf("\n");
	return 0;

// max

int max=id[0];
for(int i=0;i<size;i++){
	
	if(id[i]>max)
	max = id[i];
	printf("%d",max);
	}
}
