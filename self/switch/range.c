#include <stdio.h>
int main()
{
	char character;
	printf("Enter the character: ");
	scanf("%c",&character);
	switch(character)
	{
		case 65 ... 90:
			printf("The character is an Upper case");
			break;

		case 97 ...122:
			printf("The character is an lower case");
			break;

		case 48 ... 57:
			printf("The character is an digit");
			break;

		default:
			printf("The character not an alphabet or digit");

	}
}
