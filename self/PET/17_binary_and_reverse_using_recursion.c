#include<stdio.h>
void printBinary(int n)
{
    for(int i=3;i>=0;i--)
    {
        int res = n & (1<<i);
        if(res == 0)
        {
            printf("0 ");
        }
        else
        {
            printf("1 ");
        }

    }
}
int reverseNumber(int n)
{
    int sum=0;
 while(n!=0)
 {
    sum = sum * 10 + (n%10);
    n = n/10;
 }
 return sum;
}
int main()
{
 int n;
 scanf("%d", &n);
 printBinary(n);
 printf("\n");
 printf("Reversed number: %d\n", reverseNumber(n));
 return 0;
}