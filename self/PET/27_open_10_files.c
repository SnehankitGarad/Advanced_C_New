#include<stdio.h>
int main()
{
    char* str;
    for(int i=0;i<1;i++)
    {
        sprintf(str,"file%d",i);
        FILE* fp = fopen(str,"w");
        fclose(fp);
    }
}