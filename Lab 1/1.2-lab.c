#include <stdio.h>

int main() {
    float l;
    printf("Enter side length: ");
    scanf("%f", &l);
    
    float area = 6 * l * l;
    printf("Surface area of cube: %.2f\n", area);
    
    return 0;
}
