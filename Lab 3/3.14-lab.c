#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99s", str);
    
    int len = 0;
    while (str[len] != '\0')
        len++;
    
    printf("Length without strlen: %d\n", len);
    printf("Length with strlen: %lu\n", strlen(str));
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
