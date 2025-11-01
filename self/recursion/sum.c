#include<stdio.h>
int sum_n(int end)
{
    if(end==0)
    {
       return 0;
    } 
        
 return end+sum_n(end-1);
       
    
   // return sum;
}
int main()
{
    int end;
    scanf("%d",&end);
    printf("Sum of num: ");
   int res = sum_n(end);
   printf("%d ",res);


}