#include <stdio.h>
#include <math.h>

int isFibonacci(int x) {
    int num1 = 0;
    int num2 = 1;
    for (int i = 0; ((x >= num1) && (x >= num2)); i++) {
        if (x == num1 || x == num2) {
            return 1;
        } else {
            if (i % 2 == 0) {
                num1 += num2;
            } else {
                num2+= num1;
            }
        }
    }
    return 0;
}

int isPrime(int x) {
    for (int i = 2; i < sqrt(x); i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 2;
}

int main() {
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    int val = isFibonacci(num) + isPrime(num);
    switch(val) {
        case 1:
        printf("The number is a part of the Fibonacci series");
        break;
        case 2:
        printf("The number is prime");
        break;
        case 3:
        printf("The number is a part of the Fibonacci series and is a prime number");
        break;
        default:
        printf("The number is neither a part of the Fibonacci series nor is a prime number");
    }
    return 0;
}