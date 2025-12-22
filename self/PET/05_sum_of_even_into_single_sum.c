#include<stdio.h>
int reduceEvenDigits(int num)
{
    int sum = 0;
    while(num!=0)
    {
        int n = num %10;
        sum = sum + n;
        num = num/ 10;
    }
    if(sum <= 9)
    {
        return sum;
    }
    else{
        return reduceEvenDigits(sum);
    }
}
int main()
{
int num;
scanf("%d", &num);
int res = reduceEvenDigits(num);
printf("%d\n", res);
return 0;
}