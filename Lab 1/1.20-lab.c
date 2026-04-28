#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Remainder after dividing by 5: %d\n", num % 5);
    
    return 0;
}
