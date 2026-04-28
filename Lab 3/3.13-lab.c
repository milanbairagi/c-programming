#include <stdio.h>

int main() {
    int arr1[10], arr2[10];
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr1[i]);
    
    for (int i = 0; i < 10; i++)
        arr2[9 - i] = arr1[i];
    
    printf("Reversed array: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr2[i]);
    printf("\n\nProgrammed by Kshitij Nepali\n");
    return 0;
}
