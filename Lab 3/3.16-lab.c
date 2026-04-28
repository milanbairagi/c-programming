#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99s", str);
    
    printf("Lower case: ");
    for (int i = 0; str[i] != '\0'; i++)
        printf("%c", tolower(str[i]));
    printf("\n\nProgrammed by Kshitij Nepali\n");
    return 0;
}
