#include<stdio.h>

void patternrect(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            // find distance from each side
            int top = i;
            int left = j;
            int bottom = n - 1 - i;
            int right = n - 1 - j;

            // smallest distance determines layer
            int min = top;
            if(left < min) min = left;
            if(bottom < min) min = bottom;
            if(right < min) min = right;

            printf("%d ", min + 1);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the n: ");
    scanf("%d",&n);

    patternrect(n);
    return 0;
}
