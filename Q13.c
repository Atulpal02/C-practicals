#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int num1;
    scanf("%d", &num1);
    printf("Enter another number: ");
    int num2;
    scanf("%d", &num2);
    int hcf = 0;
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num1 == num2) {
        hcf = num1;
    } else {
        for (int i = 2; i <= num1; i++) {
            if ((num1 % i == 0) && (num2 % i == 0)) {
                hcf = i;
            }
        }
    }
    if (hcf) {
        printf("The highest common factor is %d", hcf);
    } else {
        printf("The highest common factor does not exist");
    }
    return 0;
}