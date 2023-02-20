#include <stdio.h>
#include <math.h>

int main() {
    int num[100] = {0};
    int sum = 0;
    float mean;
    float sd;
    float diffSumSq = 0;
    float var;
    int count = 0;
    while (count < 100) {
        printf("Enter the positive integer %d: ", count + 1);
        scanf("%d", &num[count]);
        if (num[count] < 1) {
            break;
        }
        sum += num[count];
        count++;
    }
    mean = ((float)sum) / count;
    int temp = count;
    while (temp > 0) {
        temp--;
        diffSumSq += pow((num[temp] - mean), 2);
    }
    sd = sqrt(diffSumSq / (count - 1));
    var = diffSumSq / (count - 1);
    printf("Sum: %d\n", sum);
    printf("Mean: %f\n", mean);
    printf("Standard Deviation: %f\n", sd);
    printf("Variance: %f\n", var);
    return 0;
}
