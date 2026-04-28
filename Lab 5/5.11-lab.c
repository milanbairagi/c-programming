#include <stdio.h>

struct Student {
    char username[9];
    char id[10];
    char pin[6];
};

int main() {
    struct Student student;
    
    printf("Enter student username (8 chars): ");
    scanf("%8s", student.username);
    printf("Enter student ID (9 chars): ");
    scanf("%9s", student.id);
    printf("Enter student PIN (5 digits): ");
    scanf("%5s", student.pin);
    
    printf("\nStudent Information:\n");
    printf("Username: %s\n", student.username);
    printf("ID: %s\n", student.id);
    printf("PIN: %s\n", student.pin);
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
