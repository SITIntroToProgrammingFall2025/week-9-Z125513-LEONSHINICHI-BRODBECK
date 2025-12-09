#include <stdio.h>

int main() {
    int r, g, b;
    
    // Read the RGB values
    scanf("%d %d %d", &r, &g, &b);
    
    // Convert to hexadecimal and print
    printf("The hex code is #%02X%02X%02X\n", r, g, b);
    
    return 0;
}

