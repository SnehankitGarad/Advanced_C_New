#include <stdio.h>
void reverse_ele(int* start,int* end)
{
	while(start<end)
	{
		int temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

		

void sq_ele(int size,int* ptr)
{
	for(int i=0;i<size;i++)
	{
		ptr[i]=ptr[i] * ptr[i];
		printf("\n%d ",ptr[i]);
	}
	
}
void print_ele(int size,int* p)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",p[i]);
		//printf("%d"*(p+i));
	}
}
void read_ele(int size,int* p)
{
	for(int i=0;i<size;i++)
	{
		scanf("%d",p+i);
		//scanf("%d",&p[i]);
	}
}



int main()
{
	int size;
	scanf("%d",&size);
	int arr[size];
	read_ele(size ,  arr);
	print_ele(size,arr);
	//sq_ele(size,arr);
	reverse_ele(arr,arr+size);
	printf("rev :");
}
