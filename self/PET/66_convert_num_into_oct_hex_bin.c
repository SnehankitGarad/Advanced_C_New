#include<stdio.h>
int main()
{
    int num;
    printf("Enter the num: ");
    scanf("%d",&num);
    printf("Binary: ");
    for(int i=31;i>=0;i--)
    {
        printf("%d",(num >> i) & 1);
    }
    printf("\n");

    printf("Octa: %o\n",num);
    printf("Hexa: %X\n",num);
}