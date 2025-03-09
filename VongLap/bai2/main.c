#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num;
    printf("Nhập một số: ");
    scanf("%d", &num);
    if (isPrime(num))
        printf("%d là số nguyên tố.\n", num);
    else
        printf("%d không phải là số nguyên tố.\n", num);
    return 0;
}
