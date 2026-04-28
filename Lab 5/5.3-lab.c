#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student students[5];
    
    printf("Enter data for 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Enter Name Roll No. Marks: ");
        scanf("%49s %d %d", students[i].name, &students[i].roll, &students[i].marks);
    }
    
    printf("\nStudents with marks > 50:\n");
    for (int i = 0; i < 5; i++)
        if (students[i].marks > 50)
            printf("Name: %s, Roll: %d\n", students[i].name, students[i].roll);
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
