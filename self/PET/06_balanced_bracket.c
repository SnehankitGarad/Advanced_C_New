#include<stdio.h>
int isBalanced(const char *s)
{
    int i=0;
    int result[256];
    int top = -1;
    while(s[i] != '\0')
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            result[++top] = s[i];
        }
        else if(s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if(top == -1)
            return 0;

            char tip = result[top--];
            if((s[i] == 41 && tip != 40)||(s[i] == 93 && tip != 91)||(s[i] == 125 && tip != 123))
            {
                return 0;
            }
        
        }
        i++;
    }
    return(top == -1);
}
int main()
 {
 char s[256];
 scanf("%s", s);
 if (isBalanced(s))
 printf("Yes, Entered string is Balanced\n");
 else
 printf("No, Entered string is not Balanced\n");
 return 0;
 }