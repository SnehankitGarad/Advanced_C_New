#include<stdio.h>
void print_rev(char* p)
{
    if(*p != '\0')
    {
    print_rev(p+1);
    printf("%c\n",*p);
    }
}
int main()
{
    char str[]="EmertexE";
    print_rev(str);
    return 0;
}
    
