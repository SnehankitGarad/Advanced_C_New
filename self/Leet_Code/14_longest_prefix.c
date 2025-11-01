#include<stdio.h>
// Wrong written try left for trying
char* longestCommonPrefix(char** strs, int strsSize)
{
    char collect[100];
    for(int i=0;i<strsSize;i++)
    {
        for(int j=i;j<=i;j++)
        {
            if(*strs[i] == *strs[j])
            {
                for(int k=i;k<=i;k++)
                {
                    if(*strs[i] == *strs[k])
                    {
                        collect[100] = *strs[i];
                        *strs[i+1] = '\0';
                    }
                }
            }
        }
    }  
    return *collect; 
}
int main()
{
    char str[100];
    for(int i=0;i<3;i++)
    {
        scanf("%[^\n]",&str[i]);
    } 
    int strsSize =3;
    char ch[10];
    *ch = longestCommonPrefix(str,  strsSize);
    printf("%s",&ch);
}