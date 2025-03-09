#include <stdio.h>

int main() {
    int n;
    double sum = 0;
    printf("Nhập số n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    printf("Tổng S = %.5lf\n", sum);
    return 0;
}
