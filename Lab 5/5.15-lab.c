#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    float salary;
    struct Date hire_date;
};

int main() {
    struct Employee person1 = {"Hari", 50000, {10, 3, 2001}};
    
    printf("Employee Information:\n");
    printf("Name: %s\n", person1.name);
    printf("Salary: %.2f\n", person1.salary);
    printf("Hire Date: %d/%d/%d\n", person1.hire_date.day, person1.hire_date.month, person1.hire_date.year);
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
