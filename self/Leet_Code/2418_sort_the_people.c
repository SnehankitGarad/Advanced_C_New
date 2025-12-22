#include<stdio.h>
#include<stdlib.h>

char** sortPeople(char** names, int namesSize, int* heights, int heightsSize, int* returnSize) 
{
    for(int i=0;i<heightsSize-1;i++)
    {
        for(int j=i+1;j<namesSize;j++)
        {
            if(heights[i] < heights[j])
            {
                int temp = heights[i];
                heights[i] = heights[j];
                heights[j] = temp;

                char* name = names[i];
                names[i] = names[j];
                names[j] = name;
            }
        }
    }
    *returnSize = heightsSize;
    return names;
}

int main()
{
    int heightsize;
    printf("Enter the number : ");
    scanf("%d",&heightsize);

    int heights[heightsize];
    printf("Enter the heights: ");
    for(int i=0;i<heightsize;i++)
    {
        scanf("%d",&heights[i]);
    }

    int namessize;
    printf("Number of names: ");
    scanf("%d",&namessize);

    char **names = malloc(namessize*sizeof(char*));
    for(int i=0;i<namessize;i++)
    {
        names[i] = malloc(sizeof(char*)*20);
    }

    printf("Enter the Names: ");
    for(int i=0;i<namessize;i++)
    {
        scanf(" %[^\n]",names[i]);
    }

    char** brr = sortPeople(names, namessize, heights,  heightsize, &heightsize); 
    for(int i=0;i<heightsize;i++)
    {
        printf("%s ",brr[i]);
    }

    // ------------------- FREE ADDED HERE -------------------
    for(int i = 0; i < namessize; i++)
    {
        free(names[i]);   // free each allocated name
    }
    free(names);          // free array of pointers
    // --------------------------------------------------------

    return 0;
}
