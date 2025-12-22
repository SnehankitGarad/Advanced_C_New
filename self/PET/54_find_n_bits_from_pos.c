#include <stdio.h>

int main()
{
    int num, pos, n;
    int result;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter position (0 to 31): ");
    scanf("%d", &pos);

    printf("Enter number of bits to extract: ");
    scanf("%d", &n);

    result = (num >> pos) & ((1 << n) - 1);

    printf("Extracted bits: ");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d", (result >> i) & 1);
    }

    return 0;
}