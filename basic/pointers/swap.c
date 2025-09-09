#include <stdio.h>
void swap(int* n1,int* n2)
{
	int temp=*n1;
	*n1 = *n2;
	*n2 = temp;

}
int main()
{
	int n1,n2;
	printf("Enter the number:");
	scanf("%d %d",&n1,&n2);
	swap(&n1,&n2);
	printf("After swap: %d %d",n1,n2);
}
