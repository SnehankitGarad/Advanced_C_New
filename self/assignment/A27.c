#include<stdio.h>
char* my_strtok(char* str,char* delim)
{
    static char* duplicate;
    static int i=0;
    int start_index=i;
    int j=0;
    if(str != NULL)
    {
        duplicate = str;
        start_index = i;
    }
    while(duplicate[i] !='\0')
    {
        j=0;
        while(delim[j] != '\0')
        {
            if(duplicate[i] == delim[j])
            {
                duplicate[i] = '\0';
                i++;
                if(duplicate[start_index] != '\0')
                {
                    return duplicate + start_index;
                }
                else{
                    start_index = 1;
                    i--;
                    break;
                }
            
            }
            j++;
        }
        i++;
    }
        if(duplicate[start_index] != '\0')
        {
           return duplicate + start_index; 
        }
        else
        {
            return NULL;
        }
    
}
int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);

    char delimiter[10];
    printf("Enter the delimiter: ");
    scanf("%s",delimiter);

   char *res= my_strtok(str,delimiter);
   while(res != NULL)
   {
    printf("%s\n",res);
    res = my_strtok(NULL,delimiter);
   }
}