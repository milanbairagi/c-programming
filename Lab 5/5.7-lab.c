#include <stdio.h>

struct Book {
    char name[50];
    int pages;
    float price;
};

int main() {
    struct Book books[5];
    
    printf("Enter data for 5 books:\n");
    for (int i = 0; i < 5; i++) {
        printf("Book %d:\n", i + 1);
        printf("Name: ");
        scanf("%49s", books[i].name);
        printf("Pages: ");
        scanf("%d", &books[i].pages);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }
    
    int max_idx = 0;
    for (int i = 1; i < 5; i++)
        if (books[i].price > books[max_idx].price)
            max_idx = i;
    
    printf("\nMost expensive book:\n");
    printf("Name: %s, Pages: %d, Price: %.2f\n", books[max_idx].name, books[max_idx].pages, books[max_idx].price);
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
