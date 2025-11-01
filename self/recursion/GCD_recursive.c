#include<stdio.h>
int GCD(int num1,int num2)
{
    
     if(num2 == 0)
     {
         return num1;
     }
    return GCD(num2,num1%num2);
    
}
int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
   int r =GCD(n1,n2);
   printf("%d ",r);
}