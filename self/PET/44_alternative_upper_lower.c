#include<stdio.h>
int main()
{
    char str[50];
    printf("Enter the String: ");
    scanf("%[^\n]",str);

    int i=0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a'&& str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i+=2;
    }

    printf("Output is: %s\n",str);
}