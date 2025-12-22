#include <stdio.h>
int findHCF(int a, int b)
{   
    // int smallest;
    // int HCF=1;
    // if(a>b)
    // {
    //     smallest = b;
    // }
    // else
    // {
    //     smallest = a;
    // }
    // for(int i=1;i<=smallest;i++)
    // {
    //     if(a % i == 0 && b % i==0)
    //     {
    //         HCF = i;
    //     }
    // }

    while(b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;


}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int h = findHCF(a, b);
    printf("HCF is %d\n", h);
    return 0;
}