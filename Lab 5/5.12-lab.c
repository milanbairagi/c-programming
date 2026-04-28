#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date date1, date2;
    
    printf("Enter first date (day month year): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);
    printf("Enter second date (day month year): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);
    
    int d1 = date1.day + date1.month * 30 + date1.year * 365;
    int d2 = date2.day + date2.month * 30 + date2.year * 365;
    
    printf("Difference in days: %d\n", d1 - d2);
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
