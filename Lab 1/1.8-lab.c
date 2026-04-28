#include <stdio.h>

int main() {
    float mm;
    printf("Enter length in mm: ");
    scanf("%f", &mm);
    
    printf("km: %.6f\n", mm / 1000000);
    printf("m: %.3f\n", mm / 1000);
    printf("cm: %.1f\n", mm / 10);
    printf("mm: %.0f\n", mm);
    
    return 0;
}
