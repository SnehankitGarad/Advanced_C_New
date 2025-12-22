#include <stdio.h> 
 
int main() { 
    unsigned int hex; 
 
    printf("Enter the hexadecimal: ");
     scanf("%X", &hex); 
 
    printf("Binary equivalent of 0x%X is: ", hex); 
 
    // If the input is 0, print 32 zeros 
    if (hex == 0) { 
        for (int i = 0; i < 32; i++) { 
            printf("0"); 
        } 
    } else { 
        // Iterate over each bit starting from the leftmost 
        for (int i = 31; i >= 0; i--) { 
            // Extract the bit at position i 
            int bit = (hex >> i) & 1; 
            printf("%d", bit); // Print the bit 
        } 
    } 
 
    printf("\n"); 
 
    return 0; 
}