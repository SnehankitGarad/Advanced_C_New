#include<stdio.h>
#include<string.h>
int main()
{
    int r;
    printf("Enter the row: ");
    scanf("%d",&r);

    char str[r][50];
    int res=0;

    printf("Enter the elements: ");
    for(int i=0;i<r;i++)
    {
        getchar();
        scanf("%[^\n]",str[i]);
        
    }

   

   for(int i=0;i<r;i++)
   {
    printf("%s -> %ld\n",str[i],strlen(str[i]));
   }
}
