#include<stdio.h>
struct student
{
	int id;
	char name[20];
	char add[60];
};
void fun(struct student* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("ID: %d\nName: %s\nAddress: %s\n",arr[i].id,arr[i].name,arr[i].add);
	}
}
int main()
{
	struct student arr[2]={{1,"ram","UP"},{2,"ganpati","maharashtra"}};
	fun(arr,2);
}
