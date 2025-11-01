#include<stdio.h>
int main()
{
    char str[10];
    FILE *fp=fopen("f1.txt","r");
    if(fp == NULL)
    {
        printf("file not found");
    }

    while(fgets(str,9,fp) != NULL)
    {
        printf("%s",str);
    }
    fclose(fp);
}