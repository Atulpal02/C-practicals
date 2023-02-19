#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    int temp = num;
    int digits = 1;
    while (temp > 0) {
        digits *= 10;
        temp /= 10;
    }
    while (digits > 1) {
        printf("%d\n", (num % digits));
        digits /= 10;
    }
    return 0;
}