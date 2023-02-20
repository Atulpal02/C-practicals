#include <stdio.h>
#include <math.h>

int main() {
    printf("Enter the lower limit: ");
    int num1;
    scanf("%d", &num1);
    printf("Enter the upper limit: ");
    int num2;
    scanf("%d", &num2);
    printf("All the prime number between %d and %d :\n",num1,num2);
    for (int i = num1; i <=num2; i++) {
        int count = 1;
        for (int j = 2; j <= pow(i, 0.5); j++) {
            if (i % j == 0) {
                count--;
                break;
            }
        }
        if (count && i != 1) {
            printf("%d ", i);
        }
    }
    return 0;
}
