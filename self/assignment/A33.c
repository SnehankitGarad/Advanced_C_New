//A33 - WAP to get 'n' bits of a given number
#include<stdio.h>
int main()
{
    int num,N;
    scanf("%d",&num);
    scanf("%d",&N);
    
    int count=(1<<N)-1;
    
    int get = num & count;
    
    printf("%d\n",get);
}