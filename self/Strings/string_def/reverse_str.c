#include <stdio.h>
void reverse_str(char ch[],int* count)

{
    int i=0;
    
    while(ch[i] != '\0')
    {
    
        count++;
        i++;
    }
     printf("%d\n",count);

for(int i=0;i<(count/2);i++)
{
    char temp=ch[i];
    ch[i]=ch[count-i-1];
    ch[count-i-1]=temp;
}
}
int main()
{
    char ch;
    scanf("%[^\n]",ch);
    int count =0;
    reverse_str(ch,&count);
   printf("%d\n",ch);
}
