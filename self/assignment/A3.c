//A3 - WAP to generate positive Fibonacci numbers?
#include <stdio.h>
int main()
{
    int num;
  //  printf("Enter the number: ");
    scanf("%d",&num);
    
    int first=0;
    int second=1;
    int next=0;
    if(num>=0)
    {
    while(next<=num)
    {
        printf("%d ",next);
        first=second;
        second=next;
        next=first+second;
    }
    }
    else
    {
        printf("Invalid input");
    }
}