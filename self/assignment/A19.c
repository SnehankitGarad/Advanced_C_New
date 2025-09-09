//A19 - WAP to generate fibbonacci numbers using recursion?

#include <stdio.h>

void positive_fibonacci(int first,int second,int limit )
{
    if(first>limit)
    return;
    
    printf("%d ",first);
    positive_fibonacci(second,first+second,limit);

    
    
}

int main()
{
    int limit;
    
    printf("Enter the limit : ");
    scanf("%d", &limit);
    if(limit>=0)
    {
    int first =0;
    int second=1;
    
    positive_fibonacci(first,second,limit);
    }
    else
    {
        printf("Invalid input");
    }
}