#include <stdio.h>

void hoanDoi(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    printf("Nhập giá trị của a: ");
    scanf("%d", &a);
    printf("Nhập giá trị của b: ");
    scanf("%d", &b);

    hoanDoi(&a, &b);

    printf("Sau khi hoán đổi: a = %d, b = %d\n", a, b);

    return 0;
}
