#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char reversestr(char* str,int l)
{
    for(int i=0;i<l/2;i++)
    {
        char temp = str[i];
        str[i] = str[l-i-1];
        str[l-i-1] = temp;
    }
}
int main()
{
    char str[100];

    scanf("%[^\n]",str);

    int l =strlen(str);
    reversestr(str , l);

    int start = 0;;
    for(int i=0; i <= l;i++)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            reversestr(&str[start], i-start);
            start = i+1;
        }
    }

   printf("Reversed string is: %s\n",str);
}