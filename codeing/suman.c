#include <stdio.h>

void main() {
    int rows, i, j;
    int num = 1;
    char alphabet = 'A';

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf("  ");
        }

        for (j = 1; j <= i; j++) {
            printf("%d ", num++);
        }

        for (j = 1; j < i; j++) {
            printf("%c ", alphabet++);
        }

        printf("\n");
    }

    return 0;
}


