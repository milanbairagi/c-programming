#include <stdio.h>

int main() {
    int marks[5];
    printf("Enter marks for 5 subjects: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &marks[i]);
    
    int aggregate = 0;
    for (int i = 0; i < 5; i++)
        aggregate += marks[i];
    
    float percentage = (aggregate / 500.0) * 100;
    printf("Aggregate: %d\n", aggregate);
    printf("Percentage: %.2f%%\n", percentage);
    
    return 0;
}
