#include<stdio.h>
#include<unistd.h>
int main()
{
    for(int i=10;i>=0;i--)
    {
        printf("Count Down: %d \r",i);
        sleep(1);
        fflush(stdout);
    }
    printf("\nMatch Begin\n");
}