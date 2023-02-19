#include <stdio.h>

int main() {
    printf("Enter the radius: ");
    float r;
    scanf("%f", &r);
    printf("The perimeter of the circle is: %f\n", (2 * 3.14 * r));
    printf("The area of the circle is: %f\n", (3.14 * r * r));
    printf("The volume of the sphere is: %f", ((4 * 3.14 * r * r * r) / 3));
    return 0;
}