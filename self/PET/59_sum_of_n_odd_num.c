#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Odd num to sum: ");
    scanf("%d",&n);
    int sum  = 0;

    printf("Odd num are: ");
    for(int i=0;i<n;i++)
    {
        int odd_num = 2*i+1;
        printf("%d ",odd_num);
        sum += odd_num;
    }
    printf("\n");
    printf("Sum of odd number is: %d\n",sum);
}