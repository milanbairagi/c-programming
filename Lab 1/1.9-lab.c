#include <stdio.h>

int main() {
    int num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    
    printf("Reversed number: %d\n", reversed);
    
    return 0;
}
