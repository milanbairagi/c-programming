#include <stdio.h>

int main() {
    char str1[100], str2[100], result[200];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    
    int i = 0;
    
    for (i = 0; str1[i] != '\0'; i++)
        result[i] = str1[i];
    
    for (int j = 0; str2[j] != '\0'; i++, j++)
        result[i] = str2[j];
    
    result[i] = '\0';
    
    printf("Concatenated: %s\n", result);
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
