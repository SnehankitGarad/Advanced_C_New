#include<stdio.h>
#include<stdlib.h>
int multiplication(int num)
{
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
}
int main()
{
    int num;
    printf("Enter the Num: ");
    scanf("%d",&num);

    multiplication(num);
}