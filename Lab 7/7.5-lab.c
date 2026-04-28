#include <stdio.h>

int main() {
    FILE *file = fopen("D:/test/drive/student.txt", "w");  // change the path as needed
    if (file == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    
    char name[50];
    int roll;
    char address[100];
    int marks;
    
    printf("Enter student name: ");
    scanf("%49s", name);
    printf("Enter roll number: ");
    scanf("%d", &roll);
    printf("Enter address: ");
    scanf("%99s", address);
    printf("Enter marks: ");
    scanf("%d", &marks);
    
    fprintf(file, "Name: %s\nRoll: %d\nAddress: %s\nMarks: %d\n", name, roll, address, marks);
    fclose(file);
    
    printf("Student data saved to student.txt\n");
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
