#include<stdio.h>
int main()
{
    FILE* fp= fopen("student.txt","r");
    char team[100];
    char cap[20];
    int id;

    fscanf(fp,"%d %s %s",&id,cap,team);
    printf("ID: %d\n",id);
    printf("Name: %s\n",cap);
    printf("team: %s\n",team);

    fclose(fp);
}