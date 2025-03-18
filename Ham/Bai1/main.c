#include <stdio.h>

double power(double x, int y) {
    double result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

int main() {
    double x;
    int y;
    printf("Nhập x: ");
    scanf("%lf", &x);
    printf("Nhập y: ");
    scanf("%d", &y);
    printf("%.2lf^%d = %.2lf\n", x, y, power(x, y));
    return 0;
}
