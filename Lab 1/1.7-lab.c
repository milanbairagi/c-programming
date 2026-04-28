#include <stdio.h>

int main() {
    int days;
    printf("Enter number of days: ");
    scanf("%d", &days);
    
    int years = days / 365;
    int months = (days % 365) / 30;
    int remaining_days = days % 30;
    
    printf("%d years, %d months, %d days\n", years, months, remaining_days);
    
    return 0;
}
