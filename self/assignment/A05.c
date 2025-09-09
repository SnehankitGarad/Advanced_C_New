//A5 - WAP to generate AP, GP, HP series?
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the First Number'A': ");
    scanf("%d",&a);
    printf("Enter the Common Difference/Ratio 'R': ");
    scanf("%d",&b);
    printf("Enter the number of terms 'N': ");
    scanf("%d",&c);
    
    int f=a;
if(c>0){ 
    printf("AP = ");
    for(int i=1;i<=c;i++)
    {
     printf("%d ",f);   
    f=f+b;
    }
    printf("\nGP = ");
    
    int mul=a;
    for(int j=1;j<=c;j++)
    {
        
        printf("%d ",mul);
        mul=mul*b;
    }
printf("\nHP = ");

int rec = a;
for(int k=1;k<=c;k++)
{
    printf("%f ",(float)1/rec);
    rec=rec+b;
    
}
}




else
{
    printf("Invalid input");
}
}