#include <stdio.h>

int main() {
    int m, n;
    printf("Enter matrix dimensions: ");
    scanf("%d %d", &m, &n);
    
    int a[m][n], b[m][n], sum[m][n];
    
    printf("Enter matrix A:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    
    printf("Enter matrix B:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &b[i][j]);
    
    printf("\nSum:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    }

    printf("\nDifference:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j] - b[i][j]);
        printf("\n");
    }

    printf("\nProduct:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int prod = 0;
            for (int k = 0; k < n; k++)
                prod += a[i][k] * b[k][j];
            printf("%d ", prod);
        }
        printf("\n");
    }
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
