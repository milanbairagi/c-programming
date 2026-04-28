#include <stdio.h>

struct Student {
    char name[50];
    int marks;
    char grade;
};

int main() {
    struct Student students[] = {
        {"Ram", 100, 'C'},
        {"Sita", 120, 'B'},
        {"Gita", 130, 'B'},
        {"Gopal", 150, 'A'}
    };
    
    printf("Name\t\tTotal Marks\tGrade\n");
    printf("====\t\t===========\t=====\n");
    for (int i = 0; i < 4; i++)
        printf("%s\t\t%d\t\t%c\n", students[i].name, students[i].marks, students[i].grade);
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
