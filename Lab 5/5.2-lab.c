#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
    char remarks[50];
};

int main() {
    struct Student student;
    
    printf("Enter student name: ");
    scanf("%49s", student.name);
    printf("Enter roll number: ");
    scanf("%d", &student.roll);
    printf("Enter marks: ");
    scanf("%d", &student.marks);
    printf("Enter remarks: ");
    scanf("%49s", student.remarks);
    
    printf("\nStudent Data:\n");
    printf("Name: %s\n", student.name);
    printf("Roll: %d\n", student.roll);
    printf("Marks: %d\n", student.marks);
    printf("Remarks: %s\n", student.remarks);
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
