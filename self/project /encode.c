#include <stdio.h>

int main() 
{
    unsigned char ch = '#';                
    unsigned char arr[8] = {00,01,03,02,05,04,03,05};

    for (int i = 0; i < 8; i++) 
    {

        // 1. GET bit from ch 
        unsigned char bit = (ch >> (7 - i)) & 1;

        // 2. CLEAR LSB of arr[i]
        arr[i] = arr[i] & ~1;

        // 3. SET the new bit in LSB
        arr[i] = arr[i] | bit;
    }

    for (int i = 0; i < 8; i++) 
    {
        printf("%d ", arr[i]);
    }
}
