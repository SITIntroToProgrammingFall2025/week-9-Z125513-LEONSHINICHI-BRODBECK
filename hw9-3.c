#include <stdio.h>

int main() {
    double A[2][3], B[3][2], C[2][2];
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &A[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%lf", &B[i][j]);
        }
    }
    
    printf("The first matrix you entered is\n");
    for (int i = 0; i < 2; i++) {
        printf("%g %g %g \n", A[i][0], A[i][1], A[i][2]);
    }
    
    printf("The second matrix you entered is\n");
    for (int i = 0; i < 3; i++) {
        printf("%g %g \n", B[i][0], B[i][1]);
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = 0;
        }
    }
    
    for (int i = 0; i < 2; i++) {  // rows of A
        for (int j = 0; j < 2; j++) {  // columns of B
            for (int k = 0; k < 3; k++) {  // common dimension
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    printf("The multiplication product of matrix A and matrix B:\n");
    for (int i = 0; i < 2; i++) {
        printf("%g %g \n", C[i][0], C[i][1]);
    }
    
    return 0;
}


