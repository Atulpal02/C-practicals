#include <stdio.h>

float userInput() {
    printf("Enter a number: ");
    float x;
    scanf("%f", &x);
    return x;
}

int main() {
    float num1, num2, num3;
    num1 = userInput();
    num2 = userInput();
    num3 = userInput();
    printf("The average is: %f", ((num1 + num2 + num3) / 3));
    return 0;
}