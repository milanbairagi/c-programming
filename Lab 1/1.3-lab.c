#include <stdio.h>

int main() {
    float r;
    const float pi = 3.14159;
    
    printf("Enter radius: ");
    scanf("%f", &r);
    
    printf("Area: %.2f\n", pi * r * r);
    printf("Circumference: %.2f\n", 2 * pi * r);
    
    return 0;
}
