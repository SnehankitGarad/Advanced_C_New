#include <stdio.h>
int my_atoi(char str[])
{
    char *i = str;
    int res = 0;
    // int flag = 0;
    if (*i == '+' || *i == '-')
    {
        i++;
        // continue;
    }
    while (*i >= '0' && *i <= '9')
    {
        *i = *i - 48;
        res = res * 10 + *i;
        i++;
    }

    if (str[0] == '-')
    {
        return (-1) * res;
    }
    else
    {
        return res;
    }
}
int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);

    int res = my_atoi(str);
    printf("Str: %d", res);
}