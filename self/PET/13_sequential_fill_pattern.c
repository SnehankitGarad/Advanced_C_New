#include<stdio.h>
 void sequentialPattern(int n)
 {
    for(int i=1;i<=n;i++)
    {
        int k = i; 
        for(int j = 1;j<=i;j++)
        {
            printf("%d ",k);
            k+=1;
        }
        printf("\n");
    }
 }
 
  int main()
  {
  int n;
  scanf("%d", &n);
  sequentialPattern(n);
  return 0;
 
 }