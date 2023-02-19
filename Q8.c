#include <stdio.h>

int main() {
    printf("Enter your investment amount: ");
    float p;
    scanf("%f", &p);
    for (int i = 0; i < 10; i++) {
        p += p * 0.0775;
    }
    printf ("The return amount is: %f", p);
    return 0;
}