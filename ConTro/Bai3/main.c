#include <stdio.h>

int main() {
    int arr[10];
    int *ptr = arr;
    int min, max;

    printf("Nhập 10 số nguyên:\n");
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", (ptr + i));
    }

    min = max = *ptr;

    for (int i = 1; i < 10; i++) {
        if (*(ptr + i) < min) {
            min = *(ptr + i);
        }
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    printf("\nPhần tử nhỏ nhất: %d\n", min);
    printf("Phần tử lớn nhất: %d\n", max);

    return 0;
}
