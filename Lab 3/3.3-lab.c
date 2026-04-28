#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    
    int max = arr[0], min = arr[0];
    for (int i = 0; i < 10; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    
    printf("Largest: %d, Smallest: %d\n", max, min);
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
