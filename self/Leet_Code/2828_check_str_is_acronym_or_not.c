#include <stdio.h>
#include <stdbool.h>
bool isAcronym(char **words, int wordsSize, char *s)
{
    int k = 0;

    if (strlen(s) != wordsSize)
    {
        return false;
    }
    for (int i = 0; i < wordsSize; i++)
    {
        if (words[i][0] != s[k++])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int wordsSize;
    char s;
    printf("Enter the Size of Word: ");
    scanf("%d", &wordsSize);

    char **words = malloc(wordsSize * sizeof(char *));
    for (int i = 0; i < wordsSize; i++)
    {
        words[i] = malloc(20*sizeof(char));
    }
    for(int i=0;i<wordsSize;i++)
    {
        scanf("%[^\n]",words[i]);
    }

    printf("Enter the compairing word: ");
    scanf("%s",s);

    bool res = isAcronym(words,  wordsSize, s);
    if(res == 1)
    {
        printf("True\n");

    }
    else
    {
        printf("False\n");
    }

}