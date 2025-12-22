#include<stdio.h>
void diagonalPattern(int n)
{
    
    for(int i=1;i<=n;i++)
    {
        int k =i;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",k);
            k += (n-j);
        }
        printf("\n");
    }
}
int main()
{
  int n;
  scanf("%d", &n);
  diagonalPattern(n);
  return 0;
}