#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    float discriminant = b * b - 4 * a * c;
    float root1 = (-b + sqrt(discriminant)) / (2 * a);
    float root2 = (-b - sqrt(discriminant)) / (2 * a);
    
    printf("Root 1: %.2f\n", root1);
    printf("Root 2: %.2f\n", root2);
    
    return 0;
}
