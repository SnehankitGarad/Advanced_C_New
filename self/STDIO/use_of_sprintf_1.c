#include<stdio.h>
#include<unistd.h>
int main()
{
    int x=255;
    char str[100];
    sprintf(str,"%d",x);
    printf("%d %d %d\n",str[0]-48,str[2]-48,str[1]-48);
    printf("%s\n",str);
}