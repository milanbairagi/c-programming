#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    char ch;
    printf("Content of test.txt:\n");
    while ((ch = fgetc(file)) != EOF)
        printf("%c", ch);
    printf("\n");
    
    fclose(file);
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
