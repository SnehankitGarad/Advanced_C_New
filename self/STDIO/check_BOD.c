#include<stdio.h>
#include<unistd.h>
int main()
{
    int x,y,z;
    printf("Enter the BirthDate(dd/mm/yy): ");
   int re = scanf("%d%d%d\n",&x,&y,&z);

    if(re == 3)
    {
        printf("Valid Birth Date\n");
    }
    else
    {
        printf("Invalid Birth of date\n");
    }

}