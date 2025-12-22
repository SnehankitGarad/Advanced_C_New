#include<stdio.h> 
void rev_char(char *str)
{
    if(*(str+1))
    {
        rev_char(str+1);
    }
    printf("%c",*str);
} 
int main() 
{ 
    char str[100]; 
    printf("Enter the string to reverse :"); 
    scanf("%[^\n]",str); 
    rev_char(str); 
    printf("\n"); 
 
    return 0; 
} 