#include<stdio.h>
int len_of_palindrom(char ch[])
{
    int i=0;
    while(ch[i] != '\0')
    {
        //*count++;
        i++;
    }
    return i;
}
int check_for_pal_word(char* ch,char* ch1)
{
    char* i=ch;
    char* j=ch1;
    int flag=0;
    

    while(i<=j)
    {
        if(*i != *j)
        {
            flag=1;
            break;
        }
        i++;
        j--;
    }
    return flag;

   /*if(flag == 0)
    {
       printf("%s\n",ch);
    }
    else{
        printf("not palindrom");
    }*/
}
int main()
{
    char ch[100];
    scanf("%[^\n]",ch);
    int count=0;
    int length = len_of_palindrom(ch); 
    char* p=ch;
    for(int i=0;i<=length;i++)
    {
        if(ch[i]==' ' || ch[i]=='\0')
        {
            ch[i]=0;
           int flag= check_for_pal_word(p,ch+i-1);
           if(flag==0)
           {
            printf("%s\n",ch);
           }
            p=ch+i+1;
        }
    }

    
}