#include <stdio.h>

double factorial(int n) {
    double fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    double sum = 0;
    printf("Nhập số n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / factorial(i);
    }
    printf("Tổng S = %.5lf\n", sum);
    return 0;
}
