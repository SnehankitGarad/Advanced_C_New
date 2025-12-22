#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* firstPalindrome(char** words, int wordsSize) 
{
    
    for(int i=0;i<wordsSize;i++)
    {
        int flag = 1;
        for(int j=0;j<strlen(words[i])/2;j++)
        {
            if(words[i][j] != words[i][strlen(words[i])-j-1])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            return words[i];
        }
    }
    return "";
}
int main()
{
    int size;
    printf("Enter the Size: ");
    scanf("%d",&size);

    char** words = malloc(size*sizeof(char*));
    for(int i=0;i<size;i++)
    {
        words[i] = malloc(sizeof(char)*20);
    }

    printf("Enter the Words: ");
    for(int i=0;i<size;i++)
    {
        scanf(" %[^\n]",words[i]);
    }
    char* brr = firstPalindrome(words, size);
    printf("Output : %s ",brr);
    printf("\n");

       for(int i=0;i<size;i++)
    {
        free(words[i]);
    }

    free(words);
   
    return 0;
}