#include <stdio.h>
int function(char *ch)
{

    int i = 0;
    int sum = 0;
    while (ch[i] != '\0')
    {
        switch (ch[i])
        {
        case 'I':
            sum = sum + 1;
            // return 1;
            break;
        case 'V':
            sum = sum + 5;

            // return 5;
            break;
        case 'X':
            sum = sum + 10;

            // return 10;
            break;
        case 'L':
            sum = sum + 50;

            // return 50;
            break;
        case 'C':
            sum = sum + 100;

            // return 100;
            break;
        case 'D':
            sum = sum + 500;

            // return 500;
            break;
        case 'M':
            sum = sum + 1000;

            // return 1000;
            break;
        }
        // sum = sum + *ch;
        i++;
    }
    return sum;
}
int main()
{
    char ch[100];
    scanf("%[^\n]", ch);

    int res = function(ch);
    printf("%d\n", res);
}