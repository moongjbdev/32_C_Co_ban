#include <stdio.h>

int main() {
    int arr[10];
    int *ptr = arr;

    printf("Nhập 10 số nguyên:\n");
    for (int i = 0; i < 10; i++) {
        printf("Phần tử thứ %d: ", i + 1);
        scanf("%d", ptr + i);
    }

    printf("\nMảng vừa nhập: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(ptr + i));
    }

    printf("\n");

    return 0;
}
