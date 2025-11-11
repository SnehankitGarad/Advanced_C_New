#include<stdio.h>
#include<stdlib.h>
int countConsistentStrings(char *allowed, char **words, int wordsSize)
{
    int count=0;
    for(int i=0;i<wordsSize;i++)
    {
        int flag = 1;
        for(int j=0;words[i][j];j++)
        {
            int found = 0;
            for(int k=0;allowed[k];k++)
            {
                if(words[i][j] == allowed[k])
                {
                found = 1;
                break;
                }
            }
            if(!found)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int row,col;
    printf("Enter the row: ");
    scanf("%d",&row);

    printf("Enter the col: ");
    scanf("%d",&col);

    char* arr[row];

    for(int i=0;i<row;i++)
    {
        arr[i] = malloc(col*sizeof(char));
    }

    printf("Enter the words: ");
    for(int i=0;i<row;i++)
    {
        
        
            scanf("%s",arr[i]);
        
    }

    char ch[5];
    printf("Enter the word with whome u want to compair: ");
    scanf("%s",ch);

    int count = countConsistentStrings(ch, arr, row);
    printf("Count is : %d",count);
        
    for (int i = 0; i < row; i++)
    free(arr[i]);
}