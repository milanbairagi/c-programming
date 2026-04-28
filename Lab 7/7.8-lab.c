#include <stdio.h>

int main() {
    FILE *file = fopen("evennumbers.txt", "w");
    if (file == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    
    printf("Writing even numbers 10-50 to evennumbers.txt:\n");
    for (int i = 10; i <= 50; i++) {
        if (i % 2 == 0) {
            fprintf(file, "%d\n", i);
            printf("%d ", i);
        }
    }
    printf("\n");
    fclose(file);
    
    file = fopen("evennumbers.txt", "r");
    printf("\nReading from evennumbers.txt:\n");
    int num;
    while (fscanf(file, "%d", &num) != EOF)
        printf("%d ", num);
    printf("\n");
    
    fclose(file);
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
