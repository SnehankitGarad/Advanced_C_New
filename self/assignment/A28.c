#include <stdio.h>

void squeeze(char str1[], char str2[])
{

    int i = 0;
    while (str1[i] != '\0')
    {
        int j = 0;
        while (str2[j] != '\0')
        {
            if(str1[i] == str2[j])
            {
                int k = i;
                while(str1[k] != '\0')
                {
                    str1[k] = str1[k+1];
                    k++;
                }
                i--;
            }
            j++;
        }
        i++;
    }
}

int main()
{
    char str1[30], str2[30];

    printf("Enter string1:");
    scanf("%[^\n]", str1);

    printf("Enter string2:");
    scanf(" %[^\n]", str2);

    squeeze(str1, str2);

    printf("After squeeze s1 : %s\n", str1);
}