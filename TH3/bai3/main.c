#include <stdio.h>

int main() {
    int a, b, c, max;

    printf("Nhập 3 số nguyên: ");
    scanf("%d %d %d", &a, &b, &c);

    max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    printf("Giá trị lớn nhất là: %d\n", max);

    return 0;
}
