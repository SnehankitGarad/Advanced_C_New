#include <stdio.h>
int my_str_len(char* ptr)
{
	int i=0,count=0;
	while(ptr[i] != '\0')
	{
		count++;
		i++;
	}
	return count;
}
int main()
{
	char str[100];
	printf("Enter a string: ");
	scanf("%[^\n]",str);
	int len = my_str_len(str);
	printf("Length: %d\n",len);
}
