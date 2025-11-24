#include<stdio.h>
#include<stdlib.h>
char* truncateSentence(char* s, int k) 
{
    
    int i=0;
    int words =0;
    while(s[i] != '\0')
    {
        if(s[i] == ' ')
        {
            words++;
            if(words == k)
            {
                break;
            }
        }
        i++;
    }
    char* result = (char*)malloc((i+1)*sizeof(char));
    for(int j = 0;j<i;j++)
    {
        result[j] = s[j];
    }

    result[i]='\0';
    return result;
}
int main()
{
    int k;
    printf("Who many you want to save: ");
    scanf("%d",&k);

    char s[20];
    printf("Enter the String: ");
    scanf(" %[^\n]",s);

    char* brr = truncateSentence(s,  k);
    printf("K string is: ");
    printf(" %s",brr);
    printf("\n");
}
