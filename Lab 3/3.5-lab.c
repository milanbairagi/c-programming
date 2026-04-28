#include <stdio.h>

void sort(int arr[], int n) {
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}

int main() {
    int arr[10];
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    
    sort(arr, 10);
    
    printf("Sorted array: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n\nProgrammed by Kshitij Nepali\n");
    return 0;
}
