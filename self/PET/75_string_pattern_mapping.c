#include<stdio.h>
#include<string.h>
int main()
{
    char pattern[50];
    char words[200];
    int count = 0;

    printf("Enter the Pattern: ");
    scanf("%s",pattern);

    getchar();

    printf("Enter the words: ");
    scanf("%[^\n]",words);

    char *str[50];

    char* token = strtok(words," ");
    while(token)
    {
        str[count++] = token;
        token = strtok(NULL," ");
    }
    if(strlen(pattern) != count)
    {
        printf("False\n");
        return 0;
    }

    for(int i=0;i<count;i++)
    {
        for(int j=i+1;j<count;j++)
        {
            if((pattern[i] == pattern[j]) != (strcmp(str[i],str[j]) == 0))
            {
                printf("False\n");
                return 0;
            }
        }
    }
    printf("True\n");
    return 0;
}