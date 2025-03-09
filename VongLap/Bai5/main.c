#include <stdio.h>

int main() {
    int n;
    printf("Nhập số n: ");
    scanf("%d", &n);
    printf("Các ước của %d là: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
