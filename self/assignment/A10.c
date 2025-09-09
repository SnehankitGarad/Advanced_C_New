//A10 - WAP to implement your own islower() function?
#include <stdio.h>


int my_islower(char ch)
{
    if((ch >= 'a' && ch <='z') )
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
    
    int res = my_islower(ch);
    if(res)
    {
        printf("Entered character is lower case alphabet");
    }
    else
    {
        printf("Entered character is not lower case alphabet");
    }
    
    
}