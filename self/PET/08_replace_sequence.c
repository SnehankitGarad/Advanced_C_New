#include<stdio.h>
#include<string.h>
void replaceSequences(char *s)
{
    char result[50];
    
    int len = strlen(s);
    int i=0;  int k= 0;

    while(s[i] != '\0')
    {
        if(len > i+1 && s[i] == 'b')
        {
            if(len > i+1 && s[++i] == 'b')
            {
                if(s[++i] == 'c')
                {
                    result[k++] = '$';
                }
                else if(s[i] == 'e')
                {
                    result[k++] = '&';
                }
                else
                {
                    result[k++] = '*';
                    i--;
                }

            }
        }
         else
        {
            result[k++] = s[i];
        }
        i++;
    }
    result[k] = '\0';
    printf("Output: %s\n",result);
   
}
 int main()
{
 char s[256];
 scanf(" %[^\n]", s);
 replaceSequences(s);
 //printf("%s\n", s);
 return 0;
}