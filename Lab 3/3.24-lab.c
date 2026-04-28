#include <stdio.h>

int main() {
    char str1[100], str2[100], result[200] = "";
    printf("Enter first string: ");
    scanf("%99s", str1);
    printf("Enter second string: ");
    scanf("%99s", str2);
    
    for (int i = 0; str1[i] != '\0'; i++)
        result[i] = str1[i];
    
    int len = 0;
    while (str1[len] != '\0') len++;
    
    for (int i = 0; str2[i] != '\0'; i++)
        result[len + i] = str2[i];
    
    result[len] = '\0';
    printf("Concatenated: %s\n", result);
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
