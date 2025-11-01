#include<stdio.h>
int main()
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);

    char str[r][15];

    printf("Enter the Input: ");
    for(int i=0;i<r;i++)
    {
        getchar();
        scanf("%[^\n]",str[i]);
    }

    for(int i=0;i<r;i++)
    {
        printf("%s\n",str[i]);
    }
}