#include <stdio.h>

int main() {
    int marks[10];
    printf("Enter marks of 10 students: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &marks[i]);
    
    for (int i = 0; i < 10; i++)
        for (int j = i + 1; j < 10; j++)
            if (marks[i] < marks[j]) {
                int temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
    
    printf("Top 5 marks: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", marks[i]);
    printf("\n\nProgrammed by Kshitij Nepali\n");
    return 0;
}
