//A25 - WAP to reverse the given string using iterative method?
#include <stdio.h>
int my_str_len(char* str)
{
    int i=0;
    int count=0;
    while(str[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

void reverse_iterative(char str[],char rcb[])
{
    
    char* i=str;
    char* j=rcb;
    while(i<=j)
    {
        char temp= *i;
        *i=*j;
        *j=temp;
        i++;
        j--;
        
    }
    
}

int main()
{
    char str[30];
    
    printf("Enter any string : ");
    scanf("%[^\n]", str);
    
    int res=my_str_len(str);
   // printf("%d",res);
    
    
    reverse_iterative(str,str+res-1);
    
    printf("Reversed string is %s\n", str);
}