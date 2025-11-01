#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size;
    scanf("%d",&size);
    int *ptr = calloc(sizeof(int),size);
    if(ptr == NULL)
    {
        printf("Memory not allocated\n");
        return 0;
    }
    for(int i=0;i<size;i++)
    {
        printf("%d",ptr[i]);
    }
}