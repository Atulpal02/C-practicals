#include <stdio.h>
#include <math.h>

int userInput() {
    int x;
    scanf("%d", &x);
    return x;
}

int main() {
    int coeffx2, coeffx, coeff1;
    float root1, root2;
    printf("Enter the coefficient of x2: ");
    coeffx2 = userInput();
    printf("Enter the coefficient of x: ");
    coeffx = userInput();
    printf("Enter the constant: ");
    coeff1 = userInput();
    printf("The equation is,\n(%d)x2 + (%d)x + (%d) = 0\n", coeffx2, coeffx, coeff1);
    if (((coeffx * coeffx) - (4 * coeffx2 * coeff1)) < 0) {
        printf("The roots are imaginery");
    } else {
        root1 = ((-(coeffx)) + sqrt((coeffx * coeffx) - (4 * coeffx2 * coeff1))) / (2 * coeffx2);
        root2 = ((-(coeffx)) - sqrt((coeffx * coeffx) - (4 * coeffx2 * coeff1))) / (2 * coeffx2);
        printf("The roots of the given equation are %f and %f", root1, root2);
    }
    return 0;
}