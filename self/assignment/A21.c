#include <stdio.h>

void replace_blank(char str[])
{
     int i=0;
     int j=0;
     
     
     
     while(str[i] != '\0')
{
    if(str[i] != ' ' && str[i] != '\t')
    {
        str[j] = str[i];
        j++;
    }
    else if(str[i] ==' ' || str[i] == '\t')
    {
        str[j] = ' ';
        j++;
        
        while(str[i] == ' '|| str[i] == '\t')
        i++;
        i--;
    }
    i++;
}
str[j]= '\0';
}

int main()
{
    char str[100];
    
    printf("Enter the string with more spaces in between two words\n");
    scanf("%[^\n]", str);
    
    replace_blank(str);
    
    printf("%s\n", str);
}