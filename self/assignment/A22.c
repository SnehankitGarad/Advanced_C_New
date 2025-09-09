#include <stdio.h>

int getword(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        if(str[i]==' '|| str[i] == '\0')
        {
            str[i]=0;
            break;
        }
        i++;
    }
    return i;
}

int main()
{
        int len = 0;
	    char str[100];

		printf("Enter the string : ");
		scanf(" %[^\n]", str);

		len = getword(str);
		printf("\n");

        printf("You entered %s and the length is %d\n", str, len);
}