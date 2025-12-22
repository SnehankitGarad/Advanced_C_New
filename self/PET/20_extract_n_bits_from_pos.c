#include<stdio.h>
unsigned int extractBits(unsigned int num, int pos, int n)
{
    num >>= (pos-1);

    unsigned int res = (1 << n) - 1;

    return num & res;
}
int main()
{
unsigned int num;
 
int pos,n;
scanf("%u %d %d", &num, &pos, &n);
unsigned int res = extractBits(num, pos, n);
printf("%u\n", res);
return 0;
}