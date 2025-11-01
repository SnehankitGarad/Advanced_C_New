#include<stdio.h>
int natural_num(int start,int num)
{
    if(start != num)
    {
        printf("%d ",start);
        natural_num(start+1,num);
    }
    //return;
}
int main()
{
    int num;
    
    printf("Till where you want natural numbers: ");
    scanf("%d",&num);
    printf("Naturals Numbers are: ");
    natural_num(1,num);
}