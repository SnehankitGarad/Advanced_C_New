#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int prefixCount(char** words, int wordsSize, char* pref) 
{
    int preflen = strlen(pref);
    int totalcount=0;

    for(int i=0;i<wordsSize;i++)
    {
        int count=0;

        if(strlen(words[i]) < preflen)
        {
            continue;
        }

        for(int j=0;j<preflen;j++)
        {
            if(words[i][j] == pref[j])
                count++;
            else
                break;
        }

        if(count == preflen)
            totalcount++;
    }

    return totalcount;
}

int main()
{
    int size;
    printf("Enter the number of words u want: ");
    scanf("%d",&size);

    char **str = malloc(sizeof(char*) * size);

    for(int i=0;i<size;i++)
    {
        str[i] = malloc(sizeof(char) * 20);
    }

    printf("Enter the names: ");
    for(int i=0;i<size;i++)
    {
        scanf(" %[^\n]", str[i]);
    }

    char pref[10];
    printf("Enter the prefix: ");
    scanf(" %s", pref);

    int count = prefixCount(str, size, pref);
    printf("number of words: %d", count);

    // ---------- FREE MEMORY ----------
    for(int i = 0; i < size; i++)
    {
        free(str[i]);   // free each string
    }
    free(str);          // free the array of pointers
    // ---------------------------------

    return 0;
}
