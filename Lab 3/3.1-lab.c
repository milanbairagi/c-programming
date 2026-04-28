#include <stdio.h>

int main() {
    int arr[10], sum = 0, product = 1;
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
        product *= arr[i];
    }
    
    float avg = sum / 10.0;
    int max = arr[0];
    for (int i = 0; i < 10; i++)
        if (arr[i] > max) max = arr[i];
    
    printf("Sum: %d, Product: %d, Average: %.2f, Max: %d\n", sum, product, avg, max);
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
