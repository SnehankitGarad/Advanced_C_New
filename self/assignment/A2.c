//A2 - WAP to find which day of the year?
#include <stdio.h>
int main()
{ int a,b,c;
//printf("Enter the value of 'n' :");
scanf("%d",&a);

if(a>0 && a<366)
{
    printf("Choose First Day:\n1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. friday\n7. Saturday\n ");
    
    printf("Enter the option to set the first day: ");
    scanf("%d",&b);
    
    if(b>0 && b<7){
        c=((b+a)-1)%7;
        
        switch(c){
        case 1:
        printf("The day is Sunday\n");
        break;
        case 2:
        printf("The day is Monday\n");
        break;
        case 3:
        printf("The day is Tuesday\n");
        break;
        case 4:
        printf("The day is Wednesday\n");
        break;
        case 5:
        printf("The day is Thursday\n");
        break;
        case 6:
        printf("The day is Friday\n");
        break;
        case 0:
        printf("The day is Saturday\n");
        break;
    }
    }
    else {
        printf("Error: Invalid input, first day should be > 0 and <= 7\n");
        
    } 
}

else{
printf("Error: Invalid Input, n value should be > 0 and <= 365\n");

}

}