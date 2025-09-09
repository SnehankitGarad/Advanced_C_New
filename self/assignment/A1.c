//A1 - WAP to find the middle number (by value) of given 3 numbers?
#include <stdio.h>
int main()
{
    int num1,num2,num3,middle;
   // printf("Enter the Three numbers :");
    scanf("%d %d %d",&num1,&num2,&num3);
    {
    if(num1>num2)
    {
        if(num1<num3){
          printf("The middle number is %d\n",num1);
        }                                     //a is middle
        else if(num2>num3){
            printf("The middle number is %d\n",num2);
        } 
        else {
            middle=num3;
            printf("The middle number is %d",num3);
        }
    }
    // else{ 
    // middle=num3;
    // printf("The middle number is %d\n",num3);
    // }                                        //c is middle
    
   if(num1<num2)
   {
       if(num1>num3){
          printf("The middle number is %d\n",num1);
       }
       else if(num2<num3){
           printf("The middle number is %d",num2);
       }
       else{
           middle=num3;
           printf("The middle number is %d",num3);
       }
   }
//   else {
//       middle=num3;
//       printf("The middle number is %d",num3);
//   }
    }
   
       
}