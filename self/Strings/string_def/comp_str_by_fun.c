#include<stdio.h>
int compare(char* s1,char* s2)
{
    int i=0;
    int flag;
    while(s1[i] != '\0' || s2[i] !='\0')
    {
        int flag=0;
        if(s1[i] != s2[i])
        {
            flag =1;
            break;
        }
    }
    if(flag == 0)
    {
        return 1;
    }
    else
    return 0;
}
int main()
{
    char s1[]="AAD1";
    char s2[]="AAD10";
    int res=compare(s1,s2);
    printf("%d\n",res);
}