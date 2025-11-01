#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc ,char* argv[])
{
    int max = strlen(argv[1]);
    for(int i=1;i<argc;i++)
    {
        if(strlen(argv[i])>max)
        {
            printf("%s->%d\n",argv[i],(int)strlen(argv[i]));
            break;
        }
        else
        {
             printf("%s->%d\n",argv[1],(int)strlen(argv[1]));

        }
    }
}