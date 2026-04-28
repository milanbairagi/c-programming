#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    char address[100];
    float salary;
};

int main() {
    struct Employee emp[5];
    
    printf("Enter data for 5 employees:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%49s", emp[i].name);
        printf("Address: ");
        scanf("%99s", emp[i].address);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }
    
    for (int i = 0; i < 5; i++)
        for (int j = i + 1; j < 5; j++)
            if (strcmp(emp[i].name, emp[j].name) > 0) {
                struct Employee temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
    
    printf("\nEmployees in ascending order of name:\n");
    for (int i = 0; i < 5; i++)
        printf("Name: %s, Address: %s, Salary: %.2f\n", emp[i].name, emp[i].address, emp[i].salary);
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
