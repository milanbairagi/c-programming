#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date date;
    
    printf("Enter date (day month year): ");
    scanf("%d %d %d", &date.day, &date.month, &date.year);
    
    printf("Date: %d/%d/%d\n", date.day, date.month, date.year);
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
