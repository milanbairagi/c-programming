#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    int result = (a > b) ? (a + b) : (a - b);
    printf("Result: %d\n", result);
    
    return 0;
}
