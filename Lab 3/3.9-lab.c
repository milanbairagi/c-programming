#include <stdio.h>

int main() {
    int matrix[2][3];
    printf("Enter 2x3 matrix:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    
    printf("\nMatrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
