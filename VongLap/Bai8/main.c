#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    printf("Nhập số n: ");
    scanf("%d", &n);
    printf("%d! = %lld\n", n, factorial(n));
    return 0;
}
