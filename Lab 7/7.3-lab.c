#include <stdio.h>

int main() {
    FILE *file = fopen("string.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    fprintf(file, "%s", str);
    fclose(file);
    
    file = fopen("string.txt", "r");
    printf("String read from file: ");
    fgets(str, sizeof(str), file);
    printf("%s", str);
    
    fclose(file);
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
