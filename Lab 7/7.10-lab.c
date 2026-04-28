#include <stdio.h>

int main() {
    int arr[10];
    
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    
    FILE *file = fopen("array.txt", "w");
    if (file == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    
    for (int i = 0; i < 10; i++)
        fprintf(file, "%d\n", arr[i]);
    fclose(file);
    
    file = fopen("array.txt", "r");
    printf("Array from file:\n");
    for (int i = 0; i < 10; i++) {
        fscanf(file, "%d", &arr[i]);
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    fclose(file);
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
