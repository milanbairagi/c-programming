#include <stdio.h>

int main() {
    printf("Prime numbers between 1 to 100:\n");
    for (int i = 2; i <= 100; i++) {
        int flag = 1;
        for (int j = 2; j < i; j++)
            if (i % j == 0) {
                flag = 0;
                break;
            }
        if (flag)
            printf("%d ", i);
    }
    
    printf("\n\nProgrammed by Kshitij Nepali\n");
    return 0;
}
