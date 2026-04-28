#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    
    printf("\nArray variables and their addresses:\n");
    for (int i = 0; i < 10; i++)
        printf("arr[%d] = %d, Address = %p\n", i, arr[i], (void*)&arr[i]);
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
