#include <stdio.h>

int main() {
    float r;
    const float pi = 3.14159;
    
    printf("Enter radius of sphere: ");
    scanf("%f", &r);
    
    float volume = (4.0 / 3.0) * pi * r * r * r;
    printf("Volume of sphere: %.2f\n", volume);
    
    return 0;
}
