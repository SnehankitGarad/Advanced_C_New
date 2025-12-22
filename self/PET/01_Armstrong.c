#include<stdio.h>
 int isArmstrong(int num)
 {
    int count = 0;
    int sum;
    int finalsum=0;
    int temp = num;
    while(num !=0)
    {
        num = num/10;
        count++;
    }
    num =temp;
    while(num != 0)
    {
        int n = num%10;
        sum=1;
        for(int i=0;i<count;i++)
        {
            sum = sum * n;
        }
        finalsum = finalsum + sum;
        num = num/10;
    }
    if(finalsum == temp)
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
  printf("Enter the number: ");
  scanf("%d", &num);
 
  if (isArmstrong(num))
  printf("%d is an Armstrong number.\n", num);
  else
  printf("%d is not an Armstrong number.\n", num);
 
  return 0;
  }