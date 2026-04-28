#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("ASCII values: ");
    for (int i = 0; str[i] != '\0'; i++)
        printf("%c=%d ", str[i], (int)str[i]);
    printf("\n\nProgrammed by Kshitij Nepali\n");
    return 0;
}
