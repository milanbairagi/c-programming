#include <stdio.h>

struct Flight {
    int flight_number;
    char origin[5];
    char destination[5];
    char start_time[10];
    char arrive_time[10];
};

int main() {
    printf("Flight Data Structure defined.\n");
    printf("Members: flight_number, origin, destination, start_time, arrive_time\n");
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
