#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    FILE* fp=fopen("f1.txt","w");
    char s[100];
    if(fp==NULL)
    {
        printf("File cannot open");

    }
    printf("Enter the string: ");
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        fputc(s[i],fp);
    }
    fclose(fp);
}