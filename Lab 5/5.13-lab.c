#include <stdio.h>

struct Flight {
    int flight_number;
    char origin[5];
    char destination[5];
    char start_time[10];
    char arrive_time[10];
};

int main() {
    struct Flight f1 = {101, "NYC", "LAX", "08:00", "11:00"};
    printf("Flight:\n");
    printf("Flight Number: %d\n", f1.flight_number);
    printf("Origin: %s\n", f1.origin);
    printf("Destination: %s\n", f1.destination);
    printf("Start Time: %s\n", f1.start_time);
    printf("Arrive Time: %s\n", f1.arrive_time);
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
