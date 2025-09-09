//A11 - WAP to implement your own ispunct() function?
#include <stdio.h>


int my_ispunct(char ch)
{
    if(!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <='z') || (ch >='0' && ch <='9')))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    char ch;
    
    
  // printf("Enter the character:");
    scanf("%c", &ch);
    
    int res = my_ispunct(ch);
    if(res)
    {
        printf("Entered character is punctuation character");
    }
    else
    {
        printf("Entered character is not punctuation character");
    }
    
    
}