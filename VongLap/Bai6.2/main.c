#include <stdio.h>

int isPerfect(int n) {
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) sum += n / i;
        }
    }
    return sum == n && n != 1;
}

int main() {
    int n;
    printf("Nhập số cần kiểm tra: ");
    scanf("%d", &n);
    if (isPerfect(n))
        printf("%d là số hoàn hảo.\n", n);
    else
        printf("%d không phải là số hoàn hảo.\n", n);
    return 0;
}
