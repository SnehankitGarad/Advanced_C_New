//A9 - WAP to implement your own isalnum() function?
#include <stdio.h>


int my_isalnum(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <='z') || (ch >='0' && ch <='9'))
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
    
    int res = my_isalnum(ch);
    if(res)
    {
        printf("Entered character is  alphanumeric character");
    }
    else
    {
        printf("Entered character is not alphanumeric character");
    }
    
    
}