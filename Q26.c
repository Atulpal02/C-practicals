#include <stdio.h>

void reverse(int* x,int size, int count) {
    if (count < size) {
        reverse(x + 1, size, count + 1);
        printf("%d ", *x);
    }
}

int main() {
    int arr[] = { 12,1,4,55,32,78,9 };
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Original string,\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Reversed string,\n");
    reverse(arr, size, 0);
    return 0;
}