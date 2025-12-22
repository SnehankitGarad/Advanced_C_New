#include<stdio.h>
#include<string.h>
int checkpal(char* words)
{
    int n = strlen(words);
    for(int i=0;i<n/2;i++)
    {
        if(words[i] != words[n-i-1])
        {
            return 0;
        }
    }
    return 1;
}
void sent(char* str)
{
    char words[20];
    int i=0,j=0,count=0;
    while(1)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            words[j] = '\0';

            if(j > 0 && checkpal(words))
            {
                printf("%s\n",words);
                count++;
                
            }

            j = 0;
            if(str[i] == '\0')
            {
                break;
            }
        }
        else
        {
            words[j++] = str[i];
        }
        i++;
    }

    printf("Num of words from sentence is palindrom are : %d\n",count);
}
int main()
{
    
    char str[100];
    

    printf("Enter the String: ");
    scanf("%[^\n]",str);

    sent(str);
}