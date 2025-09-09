#include<stdio.h>
char* address_check(const char* s1,const char* sub)
{
    int i=0;
    
    while(s1[i] != '\0')
    {
        int k=i;
        int j=0;
        while(sub[j]!='\0')
        {
        if(s1[j] == sub[j])
        {
            break;
        }
        k++;
        j++;
        }
        if(sub[j] == '\0')
        {
            return (char*)(s1+i);
        }
        
        i++;
        return NULL;
    }

    
}
int main()
{
    char s1[]="Hai how are you";
    char sub[]=" ";

    char*  p=address_check(s1,sub);
    printf("%s\n",p);
}