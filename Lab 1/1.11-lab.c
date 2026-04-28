#include <stdio.h>

int main() {
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    float fahrenheit = (9.0 / 5.0) * celsius + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    
    return 0;
}
