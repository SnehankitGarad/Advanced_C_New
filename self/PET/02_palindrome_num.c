#include <stdio.h>
int isPalindrome(int num)
{
   int sum=0;
   int temp = num;
   while(num != 0)
   {
    int n = num % 10;
    sum = sum*10 + n;
    num = num/10;
   }
   if(sum == temp)
   {
    return 1;
   }
   else
   {
    return 0;
   }
    
}
int main()
{

    int num;
    scanf("%d", &num);
    if (isPalindrome(num))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}