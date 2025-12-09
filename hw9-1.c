#include <stdio.h>

int main() {
    // Read a 2x2 matrix
    int a, b, c, d;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    printf("You entered\n");
    printf("%d %d\n", a, b);
    printf("%d %d\n", c, d);
    
    float determinant = (a * d) - (b * c);
    
    printf("Determinant is %.6f\n", determinant);
    
    return 0;
}

