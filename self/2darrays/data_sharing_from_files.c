#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char* argv[])
{
    FILE* src;
    FILE* de;
    if(argc==3)
    {
        char* p = strstr(argv[1],".txt");
        char* q = strstr(argv[1],".txt");
        if(p!=NULL && q!=NULL)
        {
            puts("Both are .txt files");
            src = fopen(argv[1],"r");
            de = fopen(argv[2],"w");
            char ch;
            while((ch=fgetc(src))!=EOF)
            {
                fputc(ch,de);
            }
            printf("Data Copied\n");
            fclose(src);
            fclose(de);
        }
        else 
        {
            printf("File are not with .txt extension\n");
        }
    }
}