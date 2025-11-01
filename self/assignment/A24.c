#include <stdio.h>

void itoa(int num, char str[])
{
    int i=0;
    int res=0;
    while(str[i] != '\0')
    {
    if(str[0]== '+' || str[0] == '-')
    {
        i++;
    }
    while(str[i]>='0'&& str[i]<='9')
    {
        int value = num%10;
        str[i]=value+48;
        res=res*10+str[i];
        num=num/10;

        i++;
    }
    
    }
    

    //printf("%d",res);
   
}

int main()
{
    int num;
    char str[10];
    
    printf("Enter the number:");
    scanf("%d", &num);
    
    (num, str);
    
    printf("Integer to string is %s", str);
}