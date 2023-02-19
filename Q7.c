#include <stdio.h>

int main() {
    printf("Enter an integer: ");
    int num;
    scanf("%d", &num);
    int sum = 0;
    while (num > 0) {
        sum += (num % 10);
        num /= 10;
    }
    printf("The sum if digits is: %d", sum);
    return 0;
}