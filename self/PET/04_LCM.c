#include <stdio.h>
int findLCM(int a, int b)
{
    int LCM = (a>b)?a:b;
    while(1)
    {
        if(LCM % a == 0 && LCM % b == 0)
        {
            
            break;
        }
        LCM++;
    }
    return LCM;
// int findHCF(int a, int b)
// {
//     if (b == 0)
//         return a;
//     return findHCF(b, a % b);
// }

// int findLCM(int a, int b)
// {
//     return (a * b) / findHCF(a, b);
// }
}
int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    int l = findLCM(a, b);
    printf("LCM is %d\n", l);
    return 0;
}