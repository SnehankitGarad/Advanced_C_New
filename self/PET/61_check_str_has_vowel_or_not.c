#include<stdio.h>
int checkvowel(char* str)
{
    int i=0;
    while(str[i] != '\0')
    {
        if(str[i] == 'A' || str[i] == 'E'|| str[i] == 'I' || str[i] == 'O'|| str[i] == 'U'
        || str[i]=='a' || str[i] == 'e' || str[i] == 'i' || str[i]== 'o' || str[i] == 'u')
        {
            return 1;
        }
        i++;
    }
    return 0;
}
int main()
{
    char str[50];
    printf("Enter the string: ");
    scanf("%[^\n]",str);

    int result = checkvowel(str);
    if(result)
    {
        printf("It has vowel\n");
    }
    else
    {
        printf("It dont have any vowel\n");
    }
}