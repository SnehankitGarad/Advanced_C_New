#include<stdio.h>
int main()
{
    FILE* fp = fopen("batch.txt","w");
    if(fp==NULL)
    {
        puts("File Not Exits");
        return 0;
    }
    else
    {
        char ch[100]="Emertxe \n";
        int i=0;
        while(ch[i] != '\0')
        {
            fputc(ch[i],fp);
            i++;

        }
        fclose(fp);
    }
}