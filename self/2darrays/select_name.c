#include<stdio.h>
#include<string.h>
int main()
{
    char str[4][15]={"Aditi","rushi","om","piyush"};

    for(int i=0;i<4;i++)
    {
        printf("%d ",i+1);
        printf("%s\n",str[i]);
    }
    int k;
    printf("Enter the option: ");
    scanf("%d",&k);


    for(int i=0;i<4;i++)
    {
        if(strcmp(str[i],str[k]))
        {
            printf("your client: %s\n",str[k-1]);
            break;
        }
    }
    
}