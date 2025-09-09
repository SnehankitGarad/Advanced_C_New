#include <stdio.h>
int my_str_chr(char str[],char ch)
{
	int i=0;
	while(str[i] != '\0')
	{
		if(str[i] == ch)
		{
			return 1;
		}
		i++;
	}
		
			return 0;
		
	
	
}


int main()
{
	char str[100];
	scanf("%[^\n]",str);

	char ch;
	scanf(" %c",&ch);

	if(my_str_chr(str,ch))
	{
		printf("Character found\n");
	}
	else
	{
		printf("Character not found\n");
	}
}
