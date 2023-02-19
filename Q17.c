#include <stdio.h>

int main() {
    int a[10] = { 1,3,5,7,9,11,13,15,17,19 };
    int b[10] = { 2,4,6,8,10,12,14,16,18,20 };
    int c[20];
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    while (aCount < 10 || bCount < 10) {
        if (a[aCount] < b[bCount]) {
            c[cCount] = a[aCount];
            cCount++;
            aCount++;
        } else if (b[bCount] < a[aCount]) {
            c[cCount] = b[bCount];
            cCount++;
            bCount++;
        } else {
            c[cCount] = a[aCount];
            cCount++;
            aCount++;
            c[cCount] = b[bCount];
            cCount++;
            bCount++;
        }
    }
    while (aCount < 10) {
        c[cCount] = a[aCount];
        cCount++;
        aCount++;
    }
    while (bCount < 10) {
        c[cCount] = b[bCount];
        cCount++;
        bCount++;
    }
    printf("Elements of A are: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\nElements of B are: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }
    printf("\nElements of C are: ");
    for (int i = 0; i < 20; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}