#include<stdio.h>
#include<string.h>

void delete_duplicate_passport_numbers(char arr[][20], int* n)
{
    for(int i = 0; i < *n; i++)
    {
        for(int j = i + 1; j < *n; j++)
        {
            if(strcmp(arr[i], arr[j]) == 0)
            {
                for(int k = j; k < *n - 1; k++)
                {
                    strcpy(arr[k], arr[k + 1]);
                }
                (*n)--; 
                j--;     
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    char arr[n][20];
    for (int i = 0; i < n; ++i)
        scanf("%s", arr[i]);

    delete_duplicate_passport_numbers(arr, &n);

    // print output (missing in your code)
    for(int i = 0; i < n; i++)
        printf("%s ", arr[i]);

    return 0;
}
