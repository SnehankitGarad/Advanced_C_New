#include <stdio.h>
struct emp{
	int id;
	char name[50];
	char add[100];
	float sal;
};
void read_data(struct emp* sptr)
{
	printf("Enter the id: ");
	scanf(" %d",&sptr->id);
	
	printf("Enter the Name: ");
	scanf(" %[^\n]",sptr->name);

	printf("Enter the Address: ");
	scanf(" %[^\n]",sptr->add);

	printf("Enter the Salary: ");
	scanf(" %f",&sptr->sal);
}
void print_data(struct emp* sptr)
{
	printf("ID: %d\n",sptr->id);
	printf("Name: %s\n",sptr->name);
	printf("Adress: %s\n",sptr->add);
	printf("Salary: %g\n",sptr->sal);
}
int main()
{
	struct emp s;
	read_data(&s);
	print_data(&s);
}



