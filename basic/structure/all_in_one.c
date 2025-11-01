#include<stdio.h>
int main()

{
	int num;
	scanf("%d",&num);
	int n;
	scanf("%d",&n);

	int get= num &((1<<n)-1);
	int set = num | ((1<<n)-1);
	int clear= num &~((1<<n)-1);
	int togger= num ^((1<<n)-1);

	printf("%d\n",get);
	printf("%d\n",set);
	printf("%d\n",clear);
	printf("%d\n",togger);
}
