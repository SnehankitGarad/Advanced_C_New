//A4 - WAP to check if number is perfect or not
#include <stdio.h>
int main()
{
    int num;
    int sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    if(num>0)
    {
         
        for(int i=1;i<=num;i++) 
        {
    
    
    
        if(num%i==0)
        {
            sum=sum+i;
        }
        }
    
        
    
    if((sum/2) == num)
    {
    printf("Yes,entered number is perfect number");
    
    }
    else
    {
        printf("No, entered number is not a perfect number");
        
    }
        
        
  }   
  else
    {
        printf("Error : Invalid Input, Enter only positive number");
    }
    
}
