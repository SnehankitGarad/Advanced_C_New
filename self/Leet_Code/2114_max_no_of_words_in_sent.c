#include<stdio.h>
int mostWordsFound(char** sentences, int sentencesSize) 
{
    int count ;
    int k =0;
    for(int i=0;i<sentencesSize;i++)
    {
        count =1;
        int j=0;
        while(sentences[i][j] != '\0')
        {
            if(sentences[i][j] ==  ' ')
            {
                count++;
                
            }
            j++;
        }
        if(k < count)
        {
            k = count;
        }
    }
    
    return k;
}
int main()
{
    int row,col;
    printf("Enter the size: ");
    scanf("%d",&row);
    
    // printf("Enter the col: ");
    // scanf("%d",&col);

    char arr[row][50];
    for(int i=0;i<row;i++)
    {
        scanf("%[^\n]" , arr[i]);
        
    }

    int res = mostWordsFound(arr, row); 

    for(int i=0;i<row;i++)
    {
        printf("%d", res);
    }

}