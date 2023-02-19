#include <stdio.h>

int main() {
    printf("Enter the number upto which Fibonacci series is to be printed: ");
    int m;
    scanf("%d", &m);
    int num1 = 0;
    int num2 = 1;
    if (m > 1) {
        printf("%d %d ", num1, num2);
    } else {
        printf("%d ", num1);
    }
    m -= 2;
    if (m > 0) {
        do {
            if (m % 2 == 0) {
                num2 += num1;
                m--;
                printf("%d ", num2);
            } else {
                num1 += num2;
                m--;
                printf("%d ", num1);
            }
        } while (m > 0);
    }
    return 0;
}