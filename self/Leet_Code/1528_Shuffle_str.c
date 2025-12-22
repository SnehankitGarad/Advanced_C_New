#include<stdio.h>
#include<stdlib.h>
char* restoreString(char* s, int* indices, int indicesSize) 
{
    char* result = (char*)malloc((indicesSize+1)*sizeof(char));
    
    for(int i=0;i<indicesSize;i++)
    {
        result[indices[i]] = s[i];
    }    
    result[indicesSize] = '\0';
   // printf("  %s\n",result);
    return result;
}
int main()
{
    int size;
    printf("Enter the size of Indices: ");
    scanf("%d",&size);

    int indices[size];
    printf("Enter the Indices: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&indices[i]);
    }

    char s[50];
    getchar();
    scanf("%[^\n]",s);

    char* brr =restoreString(s, indices, size);
    
    printf("%s\n",brr);
    free(brr);
}