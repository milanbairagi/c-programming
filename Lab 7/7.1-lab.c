#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "w");
    if (file == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    
    fprintf(file, "Welcome to my college");
    fclose(file);
    
    printf("File test.txt created and text written.\n");
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
