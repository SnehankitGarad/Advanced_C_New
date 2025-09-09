//A6 - WAP to print the numbers in X format as shown below?
#include <stdio.h>
int main()
{
    int num;
    //printf("Enter the number: ");

    scanf("%d",&num);
    
    for (int i=1;i<=num;i++)
    {
        for(int j=1;j<=num;j++)
        {
            if(i == j || i+j ==num+1)
            {
                printf("%d",j);
            }
            else
            {
                printf(" ");
            }
        }printf("\n");
    }
}