#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Reversed without strrev: ");
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\nReversed using strrev: %s", strrev(str));
    printf("\n\nProgrammed by Kshitij Nepali\n");
    return 0;
}
