#include<stdio.h>
int main()
{
    char pattern[50];
    char str[200];
    char words[20][20];
    int wcount = 0,i=0,j=0,k=0;

    printf("Enter the pattern: ");
    scanf("%s",pattern);
    getchar();
    printf("Enter the Words: ");
    scanf("%[^\n]",str);

    while(str[i] != '\0')
    {
        if(str[i] != ' ')
        {
            words[wcount][j++] = str[i];
        }
        else
        {
            words[wcount][j] = '\0';
            wcount++;
            j=0;
        }
        i++;
    }
    words[wcount][j] = '\0';
    wcount++;

    int plen = 0;
    while(pattern[plen] != '\0')
    {
        plen++;
    }
    if(plen != wcount)
    {
        printf("False\n");
        return 0;
    }

    for(int i=0;i<wcount;i++)
    {
        for(int j = i+1;j<wcount;j++)
        {
            int samepattern = (pattern[i] == pattern[j]);
            int sameWord = 1;
            k = 0;

            while(words[i][k] != '\0' || words[j][k] != '\0')
            {
                if(words[i][k] != words[j][k])
                {
                    sameWord = 0;
                    break;
                }
                k++;
            }

            if(samepattern != sameWord)
            {
                printf("false\n");
                return 0;
            }
            
        }
    }
    printf("True\n");
    return 0;
}