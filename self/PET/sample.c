#include <stdio.h>
#include<stdlib.h>

int diff(int h,int m)
{
    return h*3600+m*60;
}

int main()
{
//     int *num = 10;
//     // int *p = &num;
// void  *ptr = num;
//     ptr++;
//     ptr++;
//     ptr++;
//     //ptr = (char*)ptr + 1;   // Move by 1 byte
//     printf("%d\n", ptr);    // Correct printing




int h1,h2,m1,m2;
char t1[9],t2[9];
scanf("%s %s",t1,t2);
sscanf(t1,"%d:%d",&h1,&m1);
sscanf(t2,"%d:%d",&h2,&m2);
int final = abs(diff(h1,m1) - diff(h2,m2));
printf("%d:%d",final/3600,(final%3600)/60);

}