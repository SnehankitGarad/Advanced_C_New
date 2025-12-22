#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    

    
    
    int res = ((num & (num - 1)) == 0) ;
       
    
    if(res == 1 && num > 0)
    {
        printf("It %d is power of 2",num);
    }
    else
    {
        printf("it %d is not a power of 2",num);
    }
}