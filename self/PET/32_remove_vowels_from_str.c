#include<stdio.h>
#include <string.h> 
 
int main() 
{ 
    char str[100], t[100]; 
    int i=0, j = 0; 
 
    printf("Enter a string: "); 
    scanf("%[^\n]s", str); 



    while(str[i] != '\0')
    {
        if(str[i] != 'a' &&  str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            t[j++] = str[i];
            
        }
        i++;
    }
    t[j] = '\0';
    printf("Output is : %s\n",t);

}
