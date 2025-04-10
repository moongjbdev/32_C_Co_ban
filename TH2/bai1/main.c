#include <stdio.h>

int main() {
    int s, m = 3, n = 5, r, t;
    float x = 3.0, y;

    // Bước 1
    t = n / m;
    printf("t = n / m = %d\n", t);

    // Bước 2
    r = n % m;
    printf("r = n %% m = %d\n", r);

    // Bước 3
    y = n / m;
    printf("y = n / m = %.1f\n", y);

    // Bước 4
    t = x * y - m / 2;
    printf("t = x * y - m / 2 = %d\n", t);

    // Bước 5
    x = x * 2.0;
    printf("x = x * 2.0 = %.1f\n", x);

    // Bước 6
    s = (m + n) / r;
    printf("s = (m + n) / r = %d\n", s);

    // Bước 7
    y = --n;
    printf("y = --n = %.1f\n", y);

    // In giá trị cuối cùng của các biến
    printf("\n--- Gia tri cuoi cung ---\n");
    printf("t = %d\n", t);
    printf("r = %d\n", r);
    printf("y = %.1f\n", y);
    printf("x = %.1f\n", x);
    printf("s = %d\n", s);
    printf("n = %d\n", n);

    return 0;
}
