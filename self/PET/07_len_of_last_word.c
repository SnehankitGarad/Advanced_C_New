#include<stdio.h>
#include<string.h>
int lengthOfLastWord(char *s)
{
    int n = strlen(s) - 1;
    int count = 0;
    while(s[n] == ' ' && n >= 0)
    {
        n--;
    }
    while(s[n] != ' ' && n >= 0)
    {
        count++;
        n--;
    }
    return count;
}
int main()
{
 char s[256];
 scanf(" %[^\n]", s);
 printf("Length of the last word: %d\n", lengthOfLastWord(s));
 return 0;
}