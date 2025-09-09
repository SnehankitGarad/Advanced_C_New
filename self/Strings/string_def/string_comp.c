#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="AAD1";
    char s2[]="AAD10";
    int res=strcmp(s1,s2);
    printf("%d\n",res);
    /*if(res==0)
    {
        printf("EQUAl\n");
    }
    else
    {
        printf("not equal\n");
    }*/
}