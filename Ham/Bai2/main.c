#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Nhập số nguyên dương n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Không thể tính giai thừa của số âm!\n");
    } else {
        printf("%d! = %lld\n", n, factorial(n));
    }

    return 0;
}
