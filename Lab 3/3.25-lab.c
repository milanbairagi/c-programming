#include <stdio.h>
#include <string.h>

int main() {
    char names[10][100], temp[100];
    printf("Enter 10 student names:\n");
    for (int i = 0; i < 10; i++)
        scanf("%99s", names[i]);
    
    for (int i = 0; i < 10; i++)
        for (int j = i + 1; j < 10; j++)
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
    
    printf("Sorted names:\n");
    for (int i = 0; i < 10; i++)
        printf("%s\n", names[i]);
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
