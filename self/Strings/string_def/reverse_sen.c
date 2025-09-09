#include <stdio.h>
#include<string.h>
int length_of(char* str)
{
	int i=0;
	//int count=0;
	while(str[i] !='\0')
	{
		//count++:
		i++;
	}
	return i;
}
void my_str_rev(char str[],char car[])
{
	char* i=str;
	char* j=car;
	while(i<=j)
	{
		char temp = *i;
		*i=*j;
		*j= temp;
		i++;
		j--;
	}
	//printf("%s\n",str);
}
int main()
{
	char str[100];
	scanf("%[^\n]",str);
	getchar();
	int l = length_of(str);
	printf("%d",l);
	my_str_rev(str,str+l-1);
	char* p=str;
	for(int i=0;i<=l;i++)
	{
		if(str[i]==' ' || str[i]=='\0')
		{
			
			my_str_rev(p,str+i-1);
			p=str+i+1;
		}
		
	}
	printf("%s\n",str);
	
}
