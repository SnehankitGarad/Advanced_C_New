#include <stdio.h>
// unsigned int reverseBits(unsigned int n)
// {
//     unsigned int res =0;

//     for(int i=0;i<32;i++)
//     {
//         res = (res << 1) | (n & 1);
//         n >>= 1;
//     }
//     return res;
// }
// int main()
// {
//     unsigned int num;

//     scanf("%u", &num);
//     unsigned int rev = reverseBits(num);
//     printf("%u ",rev);
//     return 0;
// }

#include<stdio.h>
int main()
{
    unsigned int num;
    printf("Enter the Number: ");
    scanf("%u",&num);

    unsigned int res = (num >> 4) | (num << 4);
    res = res & 0xFF;

    printf("Output is %u",res);
}
