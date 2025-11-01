#include<stdio.h>
#include<stdbool.h>
bool lemonadeChange(int* bills, int billsSize) 
{
    int collect5 = 0;
    int collect10 =0;
    for(int i=0;i<billsSize;i++)
    {
        if(bills[i] == 5)
        {
            collect5++;
        }
        else if(bills[i] == 10)
        {
            if(collect5 >= 1)
            {
                collect10++;
                collect5--;
            }
            else
            {
                return false;
            }
        }
        else if(bills[i] == 20)
        {
            if(collect5 >= 1 && collect10 >=1)
            {
                collect10--;
                collect5--;
            }
            else if (collect5 >= 3)
            {
                collect5 -= 3;
            }

            else
            {
                return false;
            }
        }
    }
    
    
    return true; 
                                                                                              
    
}
int main()
{
    int size;
    printf("Enter the Person came for change: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the price given to them: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    
    if(lemonadeChange(arr,size))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}