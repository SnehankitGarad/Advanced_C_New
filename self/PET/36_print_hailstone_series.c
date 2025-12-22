#include<stdio.h>
int main(){ 
  int n; 
 
  printf("Enter the number to generate hailstone sequence: "); 
  scanf("%d", &n); 

  printf("Series is: ");
  while(n>1)
  {
    if( n % 2 ==0)
    {
        n = n/2;
    }
    else
    {
        n = (3*n)+1; 
    }

    printf("%d ",n);
  }
  printf("\n");
}