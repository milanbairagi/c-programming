#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date Date1 = {25, 2, 1957};
    
    printf("Date: %d/%d/%d\n", Date1.day, Date1.month, Date1.year);
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
