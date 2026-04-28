#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99s", str);
    
    int lower = 0, upper = 0, space = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) lower++;
        else if (isupper(str[i])) upper++;
        else if (str[i] == ' ') space++;
    }
    
    printf("Lower case: %d, Upper case: %d, Spaces: %d\n", lower, upper, space);
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
