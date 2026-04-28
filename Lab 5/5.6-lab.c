#include <stdio.h>

struct Book {
    char name[50];
    int pages;
    float price;
};

int main() {
    struct Book book;
    struct Book *ptr = &book;
    
    printf("Enter book name: ");
    scanf("%49s", ptr->name);
    printf("Enter number of pages: ");
    scanf("%d", &ptr->pages);
    printf("Enter price: ");
    scanf("%f", &ptr->price);
    
    printf("\nBook Information:\n");
    printf("Name: %s\n", ptr->name);
    printf("Pages: %d\n", ptr->pages);
    printf("Price: %.2f\n", ptr->price);
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
