#include<stdio.h>
int SECONDS_IN_YEAR(int year)
{
    if((year % 4 ==0) && (year % 400 == 0 || year % 100 != 0))
    {
        return 366*24*60*60;
    }
    return 365*24*60*60;
}
int main() { 
    int year; 
 
    
    printf("Enter the year: "); 
    scanf("%d", &year); 
 
    
    // printf("Number of seconds in the year %d: %ld\n", year, (long)SECONDS_IN_YEAR(year)); 
     printf("Number of seconds in the year %d: %d\n", year, SECONDS_IN_YEAR(year)); 
 
    return 0; 
} 