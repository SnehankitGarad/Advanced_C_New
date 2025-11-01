#include<stdio.h>
int main()
{
    union Test
    {
        int id;
        char option;
        double height;
    };




    union Test temp_var;
    temp_var.height = 7.2;
    printf("%lf\n",temp_var.height);
    temp_var.id = 0x1234;
    printf("%x\n",temp_var.id);
    temp_var.option = '1';
    printf("%c\n",temp_var.option);
    printf("------------------------------\n");
     printf("%lf\n",temp_var.height);
      printf("%x\n",temp_var.id); 
      printf("%c\n",temp_var.option);
    

}