#include<stdio.h>
int main()
{
    char str[200];
    int seen[256] ={0};

    scanf("%s",str);

    for(int i=0;str[i];i++)
    {
        if(!seen[(unsigned char)str[i]])
        {
            printf("%c",str[i]);
            seen[(unsigned char)str[i]] = 1;
        }
    }
    return 0;
}