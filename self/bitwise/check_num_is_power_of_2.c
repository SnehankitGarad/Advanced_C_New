#include <stdio.h>
int main()
{
    int num;
    //int count=0;
    scanf("%d",&num);

    // for(int i=0;i<32;i++)
    // {
    //     int res = num&(1<<i);
    //     if(res != 0)
    //     {
    //         count++;
    //     }
    // }
    // if(count == 1)
    // {
    //     printf("%d is the power of 2.\n",num);
    // }
    // else{
    //     printf("%d is not the power of 2.\n",num);
    // }



    int class = num & (num-1);
    if(class == 0)
    {
      printf("%d is the power of 2.\n",num);  
    } 
    else
    {
     printf("%d is not the power of 2.\n",num);
    }
}