#include <stdio.h>

int main() {
    int marks[5];
    printf("Enter marks of BscCSIT-1 semester students: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &marks[i]);
    
    for (int i = 0; i < 5; i++)
        for (int j = i + 1; j < 5; j++)
            if (marks[i] < marks[j]) {
                int temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
    
    printf("Descending order: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", marks[i]);
    
    int max = marks[0], min = marks[4];
    printf("\nMaximum: %d, Minimum: %d\n", max, min);
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
