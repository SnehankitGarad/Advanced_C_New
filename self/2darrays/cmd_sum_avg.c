#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
    // for(int i=0;i<argc;i++)
    // {
    //     printf("%s ",argv[i]);
    // }

    //while Loop

    int i=1;
    int  sum=0;
    int res;
    while(argv[i] != NULL)
    {
       sscanf(argv[i],"%d",&res);
        sum = sum + res;
         ;
         i++;
    }
    printf("Sum: %d \n",sum);
    printf("Avg : %f \n",(float)sum/(argc-1));
}