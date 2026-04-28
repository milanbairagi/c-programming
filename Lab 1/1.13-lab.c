#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    
    float s = (a + b + c) / 2.0;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    printf("Area: %.2f\n", area);
    
    return 0;
}
