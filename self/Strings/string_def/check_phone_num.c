#include<stdio.h>
int check_valid(char ch[])
{
    int i=0;
    while(ch[i]!='\0')
    {
        if(!(*ch>='0' && *ch<='9'))
        {
            return 0;
            break;
        }
        i++;
    }
    return 1;
}
int main()
{
    char ch[100];
    scanf("%[^\n]",ch);
    if(check_valid(ch))
    {
        printf("Number is valid");
    }
    else
    {
        printf("Number is invalid");
    }

}