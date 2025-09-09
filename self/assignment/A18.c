//A18 - WAP to find factorial of given number using recursion?
#include <stdio.h>

int main()
{
    static int flag =1;
    static int num;
    static unsigned long long int fact = 1;
    
    
    if(flag ==1)
    {
    scanf("%d",&num);
    flag =0;
    }
     
     
     
    if(num==0)
    {
        printf("Factorial of the given number is %lld",fact);
    }
    else if(num>0)
        {
            if(num>1)
            {
                fact =fact*num;
                num--;
                main();
            }
        }
        else
        {
            printf("Invalid Input");
        }
        
        if(num == 1)
        {
            num=0;
            printf("Factorial of the given number is %lld",fact);
        }
    
    
    
    
    
   
    
    
}