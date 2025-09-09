#include<stdio.h>
struct student
{
	int id;
	char name[20];
	char add[60];
};
int main()
{
	int size;
	printf("Enter the size: ");
	scanf("%d",&size);
	struct student arr[size];

	for(int i=0;i<size;i++)
	{
		printf("Enter Your ID: ");
		scanf("%d",&arr[i].id);
		getchar();
		printf("Enter Your Name: ");
		scanf("%[^\n]",arr[i].name);
		getchar();
		printf("Enter Your Address: ");
		scanf("%[^\n]",arr[i].add);
	}
	for(int i=0;i<size;i++)
	{
		printf("---------------------------\n");
		printf("ID: %d\nName: %s\nAddress: %s\n",arr[i].id,arr[i].name,arr[i].add);
	}
}
		


	

