#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) 
{
    int len1=0;
    int len2=0;

    for(int i = 0; i < word1Size; i++)
        len1 += strlen(word1[i]);

    for(int i = 0; i < word2Size; i++)
        len2 += strlen(word2[i]);

    if(len1 != len2)
        return false;

    char* result1 = (char*)malloc((len1+1) * sizeof(char));
    result1[0] = '\0';
    for(int i = 0; i < word1Size; i++)
        strcat(result1, word1[i]);

    char* result2 = (char*)malloc((len2+1) * sizeof(char));
    result2[0] = '\0';
    for(int i = 0; i < word2Size; i++)
        strcat(result2, word2[i]);

    bool isequal = strcmp(result1, result2) == 0;

    free(result1);
    free(result2);

    return isequal;
}

int main()
{
    int size1, size2;
    printf("Size of Size1: ");
    scanf("%d", &size1);

    char* word1[size1];
    printf("Enter the string: ");
    for(int i = 0; i < size1; i++)
    {
        word1[i] = (char*)malloc(200);
        scanf(" %[^\n]", word1[i]);
    } 

    printf("Enter the size2: ");
    scanf("%d", &size2);

    char* word2[size2];
    printf("Enter the string2: ");
    for(int i = 0; i < size2; i++)
    {
        word2[i] = (char*)malloc(200);
        scanf(" %[^\n]", word2[i]);
    }

    if(arrayStringsAreEqual(word1, size1, word2, size2))
        printf("True\n");
    else
        printf("False\n");

    // ---------- FREE ADDED HERE ----------
    for(int i = 0; i < size1; i++)
        free(word1[i]);

    for(int i = 0; i < size2; i++)
        free(word2[i]);
    // -------------------------------------

    return 0;
}
