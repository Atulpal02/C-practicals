#include <stdio.h>

void toBinary(int x) {
    int bin = 0;
    int count = 1;
    while (x > 0) {
        bin += (x % 2) * count;
        x /= 2;
        count *= 10;
    }
    printf("Binary: %d\n", bin);
}

void bitwiseOperators(int x, int y) {
    printf("AND: %d\n", (x & y));
    toBinary(x & y);
    printf("OR: %d\n", (x | y));
    toBinary(x | y);
    printf("XOR: %d\n", (x ^ y));
    toBinary(x ^ y);
    printf("NOT: %d, %d", (~x), (~y));
}

int userInput() {
    printf("Enter a number: ");
    int x;
    scanf("%d", &x);
    return x;
}

int main() {
    int num1 = userInput();
    toBinary(num1);
    int num2 = userInput();
    toBinary(num2);
    bitwiseOperators(num1, num2);
    return 0;
}