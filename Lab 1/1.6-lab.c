#include <stdio.h>

int main() {
    int seconds;
    printf("Enter seconds: ");
    scanf("%d", &seconds);
    
    int hours = seconds / 3600;
    int mins = (seconds % 3600) / 60;
    int secs = seconds % 60;
    
    printf("%d hours, %d minutes, %d seconds\n", hours, mins, secs);
    
    return 0;
}
