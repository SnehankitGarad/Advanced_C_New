//A17 - WAP to check whether a given number is prime or not using function.?
#include <stdio.h>



int main()
{
    int num;
    scanf("%d",&num);
    int count=0;
    if(num>0)
    {
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    
    if(count ==2)
    {
        printf("%d is a prime number",num);
    }
    else
    {
        printf("%d is not a prime number",num);
    }
    }
    else
    {
    printf("Invalid input");
    }
    return 0;
}