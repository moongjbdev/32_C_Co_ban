#include <stdio.h>

long long fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Nhập số nguyên dương n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Vui lòng nhập số không âm!\n");
    } else {
        printf("Số Fibonacci thứ %d là: %lld\n", n, fibonacci(n));
    }

    return 0;
}
