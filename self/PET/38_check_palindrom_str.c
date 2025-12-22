#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int checkstr(char* str)
{
    int l = strlen(str);
    for(int i=0;i<l/2;i++)
    {
        if(str[i] != str[l-i-1])
        {
            return 0;
        }
    }
    return 1;

}
int main()
{
    char str[50];

    scanf("%[^\n]",str);

    if(checkstr(str))
    {
        printf("string is palindrom\n");
    }
    else
    {
        printf("String is not a palindrom\n");
    }
}