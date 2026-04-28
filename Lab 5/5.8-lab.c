#include <stdio.h>

union Student {
    int roll;
    int marks;
};

int main() {
    union Student student;
    
    printf("Setting roll number to 101:\n");
    student.roll = 101;
    printf("Roll: %d\n", student.roll);
    
    printf("\nSetting marks to 95:\n");
    student.marks = 95;
    printf("Marks: %d\n", student.marks);
    
    printf("Roll (after setting marks): %d\n", student.roll);
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
