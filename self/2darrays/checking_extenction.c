#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc ,char* argv[])
{
    for(int i=1;i<argc;i++)
    {
        if(argc == 3)
        {
            if(!(strstr(argv[i],".txt")))
            {
               
                printf("both are not txt\n");
            }
            else{
                printf("both are txt");
            }
        }
        else
        {
            printf("Invalid Input");
        }
    }
}