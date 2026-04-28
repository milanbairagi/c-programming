#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    int vowels = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowels++;
    }
    
    printf("Number of vowels: %d\n", vowels);
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
