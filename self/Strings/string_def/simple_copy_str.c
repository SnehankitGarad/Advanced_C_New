#include<stdio.h>
#include<string.h>
int main()
{
    char src[100];
    scanf("%[^\n]",src);

    char dest[100];
    strcpy(dest,src);
    printf("%s\n",src);
    printf("%s",dest);
}