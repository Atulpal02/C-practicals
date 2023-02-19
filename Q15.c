#include <stdio.h>
#include <math.h>

int factorial(int x) {
    int fac;
    if (x > 1) {
        fac = x * factorial(x - 1);
    } else {
        return 1;
    }
    return fac;
}

int main() {
    printf("Enter the angle in degrees (x): ");
    float ang;
    scanf("%f", &ang);
    ang *= (3.14 / 180);
    int exp = 1;
    int sign = 1;
    float sinx = 0;
    for (int i = 0; i < 4; i++) {
        sinx += (pow(ang, exp) / factorial(exp)) * sign;
        exp += 2;
        sign *= -1;
    }
    printf("sin(%f) = %f", ang, sinx);
    return 0;
}