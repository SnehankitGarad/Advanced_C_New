#include<stdio.h>
void my_str_cat(char str1[],char str2[])
{
	int i=0;
	while(str1[i] != '\0')
	{
		
		i++;
	}
	int j=0;
	while(str2[j] != '\0')
	{
		str1[i]=str2[j];
		i++;
		j++;
	}

	str1 = '\0';
}
int main()
{
	char str1[100];
	scanf("%[^\n]",str1);

	char str2[100];
	scanf(" %[^\n]",str2);

	my_str_cat(str1,str2);
		printf("%s\n",str1);
}

