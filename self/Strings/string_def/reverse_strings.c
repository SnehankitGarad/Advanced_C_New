#include <stdio.h>
void reverse_str(char ch[])


{
    int count=0;
    
    int i=0;
    
    
    while(ch[i] != '\0')
    {
    
        count++;
        i++;
    }
    printf("%d\n",i);

for(int i=0,j=count-1;i<=j;i++,j--)
{
    char temp=ch[i];
    ch[i]=ch[j];
    ch[j]=temp;
}
}

int main()
{
    char ch[100];
    scanf("%[^\n]",ch);

    
    reverse_str(ch);
   printf("%s\n",ch);
}