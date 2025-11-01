#include<stdio.h>
#include<unistd.h>
int main()
{
    // int ret = printf("Hello\n");
    // printf("%d\n",ret);
    // printf(" %d\n",printf("%d",ret));

    float f = 1.25;
    int res = printf("%g\n",f);
    printf("%d\n",res);
}