#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99s", str);
    
    printf("Toggled case: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i]))
            printf("%c", tolower(str[i]));
        else
            printf("%c", toupper(str[i]));
    }
    printf("\n\nProgrammed by Kshitij Nepali\n");
    return 0;
}
