//A12 - WAP to implement your own isxdigit() function?

#include <stdio.h>


int my_xdigit(char ch)
{
    if((ch>='A' && ch<='F')||(ch >= 'a' && ch <='f') || (ch >='0' && ch <='9'))
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
    
    int res = my_xdigit(ch);
    if(res)
    {
        printf("Entered character is an hexadecimal digit");
    }
    else
    {
        printf("Entered character is not an hexadecimal digit");
    }
    
    
}