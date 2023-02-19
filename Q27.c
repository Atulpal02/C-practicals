#include <stdio.h>

int areIdentical(int* ptr1, int* ptr2, int x) {
    for (int i = 0; i < x; i++) {
        if (*ptr1 != *ptr2) {
            return 0;
        }
        ptr1++;
        ptr2++;
    }
    return 1;
}

int main() {
    int arr1[] = { 1,2,3,4,5 };
    int arr2[] = { 1,2,3,4,6 };
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    if (size1 != size2) {
        printf("The arrays are not identical");
    } else {
        int x = areIdentical(arr1, arr2, size1);
        if (x) {
            printf("The arrays are identical");
        } else {
            printf("The arrays are not identical");
        }
    }
    return 0;
}