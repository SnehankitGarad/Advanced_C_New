#include<stdio.h>
int main()
{
    FILE* fp = fopen("image.bmp","r+");

    fseek(fp,0,SEEK_END);
    int size = ftell(fp);
    printf("Size of the File: %d\n",size);
    rewind(fp);
    char arr[size];

    fread(arr,sizeof(char),size,fp);
    rewind(fp);

    FILE* dup = fopen("timepass.bmp","w+");
    fwrite(arr,sizeof(char),size,dup);

    fclose(fp);
    fclose(dup);

}