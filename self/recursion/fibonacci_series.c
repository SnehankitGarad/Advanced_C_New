#include<stdio.h>
int fibo(int first,int sec,int count, int total)
{
    if(count != total)
    {
      printf("%d ",sec);
      int res=first+sec;
      count++;
      fibo(sec,res,count,total);
    }
}
int main()
 {
//     printf("Enter the num: ");
//     int n;
//     scanf("%d ",&n);
    fibo(0,1,0,10);
}