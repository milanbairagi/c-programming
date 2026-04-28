#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    char address[100];
};

int main() {
    struct Person people[5];
    
    printf("Enter data for 5 people:\n");
    for (int i = 0; i < 5; i++) {
        printf("Person %d:\n", i + 1);
        printf("Name: ");
        scanf("%49s", people[i].name);
        printf("Address: ");
        scanf("%99s", people[i].address);
    }
    
    for (int i = 0; i < 5; i++)
        for (int j = i + 1; j < 5; j++)
            if (strcmp(people[i].name, people[j].name) > 0) {
                struct Person temp = people[i];
                people[i] = people[j];
                people[j] = temp;
            }
    
    printf("\nPeople in alphabetical order:\n");
    for (int i = 0; i < 5; i++)
        printf("Name: %s, Address: %s\n", people[i].name, people[i].address);
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
