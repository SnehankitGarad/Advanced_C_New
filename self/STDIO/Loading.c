#include<stdio.h>
#include<unistd.h>
int main()
{
    for(int i =1;i<=100;i++)
    {
        printf("Loading [");
        for(int j=1;j<=100;j++)
        {
            if(j<=i)
            {
                printf("-");
            }
            else
            {
                printf(" ");
            }
        }
        printf("] %d %%\r",i);
        fflush(stdout);
        usleep(50000);
    }
    printf("Loading Completed\n");
}