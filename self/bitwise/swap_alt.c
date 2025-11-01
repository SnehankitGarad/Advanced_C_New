#include<stdio.h>
int main()
{
    int a,b;
    int res;
    
    scanf("%d",&a);
    scanf("%d",&b);

    a=a^b;
    b=(a^b)^b;
    b=a;
    a=a^b;
    a=(a^b)^a;
    a=b;
   

    printf("after swaping elements are: %d %d\n",a,b);
    
   
    
}