#include<stdio.h>
int main()
{
    char ch;
    FILE* fp = fopen("f1.txt","r");
    if(fp==NULL)
    {
        printf("File Not Found\n");
        return(0);
    }
    ch = fgetc(fp);
    while(!feof(fp))
    {
        printf("%c",ch);
        ch = fgetc(fp);
    }
    printf("\n");
    fclose(fp);
}