#include <stdio.h>

int main() {
    FILE *file = fopen("numbers.txt", "w");
    if (file == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    
    printf("Writing numbers 1-20 to file:\n");
    for (int i = 1; i <= 20; i++) {
        fprintf(file, "%d\n", i);
        printf("%d ", i);
    }
    printf("\n");
    fclose(file);
    
    file = fopen("numbers.txt", "r");
    printf("Twice of stored numbers:\n");
    int num;
    while (fscanf(file, "%d", &num) != EOF)
        printf("%d ", num * 2);
    printf("\n");
    
    fclose(file);
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
