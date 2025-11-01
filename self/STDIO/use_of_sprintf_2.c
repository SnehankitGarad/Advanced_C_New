#include<stdio.h>
#include<unistd.h>
int main()
{
    int id=255;
    float avg = 1.25;
    char name[]="Snehankit";
    char str[100];
    sprintf(str,"%d %g %s",id ,avg,name);
    printf("%s\n",str);
}