#include <stdio.h>

int main () {
    printf("Enter the number of rows: ");
    int r;
    scanf("%d", &r);
    int numCount = 1;
    int alphaCount = 65;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < r - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            if (numCount > 9) {
                numCount = 1;
            }
            if (alphaCount > 90) {
                alphaCount = 65;
            }
            if (i % 2 == 0) {
                printf("%d ", numCount);
                numCount++;
            } else {
                printf("%c ", alphaCount);
                alphaCount++;
            }
        }
        printf("\n");
    }
    return 0;
}