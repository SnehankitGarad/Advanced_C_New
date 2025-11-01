#include <stdio.h>
int main()
{
    FILE* fp=fopen("student.txt","r");
    if(fp==NULL)
    {
        printf("There is no such file\n");
        return 0;
    }
    else
    {
        char ch;
        while((ch = fgetc(fp)) != EOF)
        {
            printf("%c",ch);
        }
        fclose(fp);
    }
}