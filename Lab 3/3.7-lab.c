#include <stdio.h>

int main() {
    int arr[25], pos = 0, neg = 0, even = 0, odd = 0;
    printf("Enter 25 numbers: ");
    for (int i = 0; i < 25; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) pos++;
        else if (arr[i] < 0) neg++;
        
        if (arr[i] % 2 == 0) even++;
        else odd++;
    }
    
    printf("Positive: %d, Negative: %d, Even: %d, Odd: %d\n", pos, neg, even, odd);
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
