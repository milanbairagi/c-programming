#include <stdio.h>

int main() {
    FILE *file = fopen("contact.txt", "w");
    if (file == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    
    char name[50], address[100], phone[20];
    
    printf("Enter name: ");
    scanf("%49s", name);
    printf("Enter address: ");
    scanf("%99s", address);
    printf("Enter telephone: ");
    scanf("%19s", phone);
    
    fprintf(file, "Name: %s\nAddress: %s\nTelephone: %s\n", name, address, phone);
    fclose(file);
    
    file = fopen("contact.txt", "r");
    char line[200];
    printf("\nData from file:\n");
    while (fgets(line, sizeof(line), file))
        printf("%s", line);
    
    fclose(file);
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
