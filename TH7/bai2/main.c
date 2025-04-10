#include <stdio.h>

long long tinhGiaiThua(int n) {
    long long gt = 1;
    for (int i = 1; i <= n; i++) {
        gt *= i;
    }
    return gt;
}

int main() {
    int n;
    printf("Nhập một số nguyên: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Không có giai thừa cho số âm.\n");
    } else {
        printf("%d! = %I64d\n", n, tinhGiaiThua(n));

    }

    return 0;
}
