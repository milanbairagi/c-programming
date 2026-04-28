#include <stdio.h>

int main() {
    char filename[100];
    printf("Enter filename to append to: ");
    scanf("%99s", filename);
    
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    getchar();
    char text[100];
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);
    
    fprintf(file, "%s", text);
    fclose(file);
    
    printf("Text appended successfully!\n");
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
