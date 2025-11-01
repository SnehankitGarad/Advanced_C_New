#include <stdio.h>
int my_str_len(char* ch)
{
    int i=0;
    while(ch[i] != '\0')
    {
        i++;
    }
    return i;
}
int check_it(char* ch,char* size)
{
    char* i=ch;
    char* j=size;
    
        while(i<j)
        {
            if(!(*i == *j))
            {
                return 0;
            }
            i++;
            j--;
        }
        return 1;
    
    
}
int main()
{
    char ch[50];
    scanf("%[^\n]",ch);
    
    int res=my_str_len(ch);
    if(check_it(ch,ch-res))
    {
         printf("No,Entered string is not palindrome.");
      
    }
    else
    {
         printf("Yes,Entered string is palindrome.");
         
    }
}
