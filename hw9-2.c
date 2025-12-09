#include <stdio.h>

int main() {
    int matrix[3][3];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("You entered\n");
    for (int i = 0; i < 3; i++) {
        printf("%d %d %d\n", matrix[i][0], matrix[i][1], matrix[i][2]);
    }
    
    // Print the flipped matrix
    printf("Output\n");
    for (int i = 0; i < 3; i++) {
        printf("%d %d %d\n", matrix[i][2], matrix[i][1], matrix[i][0]);
    }
    
    return 0;
}

