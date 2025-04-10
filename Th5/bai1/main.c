#include <stdio.h>

int main() {
    int n, i;
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Nhập phần tử arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    printf("Giá trị nhỏ nhất: %d\n", min);
    printf("Giá trị lớn nhất: %d\n", max);

    return 0;
}
