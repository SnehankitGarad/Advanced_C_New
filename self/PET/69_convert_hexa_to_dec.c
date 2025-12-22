#include<stdio.h>
#include<string.h>
int main()
{
    char hex[20];
    int base = 1,dec = 0;
    printf("Enter Hexa num: ");
    scanf("%s",hex);
    int len = strlen(hex);

    for(int i = len - 1;i >= 0;i--)
    {
        if(hex[i] >= '0' && hex[i] <= '9')
        {
            dec = dec + (hex[i] - '0')*base;
        }
        else if(hex[i] >= 'A' && hex[i] <= 'F')
        {
            dec = dec + (hex[i] - 'A' + 10) * base;
        }
        else if(hex[i] >= 'a' && hex[i] <= 'f')
        {
            dec = dec + (hex[i] - 'a' + 10) * base;
        }

        else{
            printf("This is Invalid Number\n");
            return 0;
        }


        base = base * 16;
    }
    
    printf("Decimal num is: %d\n",dec);
}