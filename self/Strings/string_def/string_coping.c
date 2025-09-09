#include <stdio.h>
void my_str_cpy(char src[],char dest[])
{
	int i=0;
	while(src[i] != '\0')
	{
		dest[i]=src[i];
		i++;
	}
	dest[i] = '\0';
	
}
int main()
{
	char src[100];
	printf("Enter the string: ");
	scanf("%[^\n]",src);
	char dest[100];

	my_str_cpy(src,dest);
	printf("%s\n",dest);
	return 0;
}
