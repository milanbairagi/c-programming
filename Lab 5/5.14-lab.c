#include <stdio.h>
#include <string.h>

struct Flight {
    int flight_number;
    char origin[5];
    char destination[5];
    char start_time[10];
    char arrive_time[10];
};

int main() {
    struct Flight flights[3] = {
        {101, "KTM", "DEL", "08:00", "10:30"},
        {102, "DEL", "KTM", "11:00", "13:30"},
        {103, "KTM", "BOM", "14:00", "16:45"}
    };
    
    char airport[5];
    printf("Enter airport code: ");
    scanf("%4s", airport);
    
    printf("\nFlights for airport %s:\n", airport);
    for (int i = 0; i < 3; i++) {
        if (strcmp(flights[i].origin, airport) == 0 || strcmp(flights[i].destination, airport) == 0) {
            printf("Flight: %d, Origin: %s, Destination: %s, Start: %s, Arrive: %s\n",
                   flights[i].flight_number, flights[i].origin, flights[i].destination,
                   flights[i].start_time, flights[i].arrive_time);
        }
    }
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
