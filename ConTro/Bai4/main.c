#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                swap((arr + j), (arr + j + 1));
            }
        }
    }
}

int main() {
    int n;

    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Nhập %d số nguyên:\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", (ptr + i));
    }

    sortArray(ptr, n);

    printf("\nMảng sau khi sắp xếp tăng dần: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    printf("\n");
    return 0;
}
