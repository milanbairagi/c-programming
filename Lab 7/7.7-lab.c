#include <stdio.h>

int main() {
    FILE *file = fopen("new1.dat", "w");
    if (file == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    fprintf(file, "%s", str);
    fclose(file);
    
    file = fopen("new1.dat", "r");
    printf("String from new1.dat: ");
    fgets(str, sizeof(str), file);
    printf("%s", str);
    
    fclose(file);
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
